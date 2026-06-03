#include "vesc.hpp"
#include <Arduino.h>
#include <Preferences.h>

#include <VescUart.h>
#include "ui/GUI.h"
#include "BikeState.hpp"
/** Initiate VescUart class */
VescUart vesc;
Preferences preferences;

void VESCTask(void *parameters);

// Implement the functions here
void initVesc()
{
  preferences.begin("bikeData", false);                   // "bikeData" is the namespace, false = read/write
  bike.odometerMiles = preferences.getFloat("odo", 0.0f); // Load saved odometer, default 0

  // Initialize HardwareSerial2 with secondary pins
  Serial2.begin(115200, SERIAL_8N1, 9, 10);

  vesc.setSerialPort(&Serial2);
}

float getSpeedRpm()
{
  if (vesc.getVescValues())
  {
    return vesc.data.rpm;
  }
  else
  {
    return -1; // Return -1 if there was an error getting the values
  }
}

void updateSpeedometerUI(float MPH)
{
  lv_arc_set_value(GUI_Arc__MainPage__arc, MPH * 2);
  char buf[16];
  snprintf(buf, sizeof(buf), "%d", (int)MPH);
  _ui_label_set_property(GUI_Label__MainPage__20, _UI_LABEL_PROPERTY_TEXT, buf);
}
void updateOdometerUI(int miles)
{
  char buf[16];
  snprintf(buf, sizeof(buf), "%d", miles);
  _ui_label_set_property(GUI_Label__MainPage__label, _UI_LABEL_PROPERTY_TEXT, buf);
}
void updateWattsUI(float watts)
{
  char buf[16];
  snprintf(buf, sizeof(buf), "%d", (int)watts);
  _ui_label_set_property(GUI_Label__MainPage__power_text, _UI_LABEL_PROPERTY_TEXT, buf);
}
void updateBatteryUI(float batteryPercent)
{
  char buf[16];
  snprintf(buf, sizeof(buf), "%d%%", (int)batteryPercent);
  _ui_label_set_property(GUI_Label__MainPage__Battery_text, _UI_LABEL_PROPERTY_TEXT, buf);
}
void updateErrorUI(mc_fault_code errorCode)
{
  if (errorCode != FAULT_CODE_NONE)
  {
    _ui_opacity_set(GUI_Label__MainPage__ERROR, 255); // Show error label
    char buf[32];
    snprintf(buf, sizeof(buf), "Error: %d", errorCode);
    _ui_label_set_property(GUI_Label__MainPage__ERROR, _UI_LABEL_PROPERTY_TEXT, buf);
  }
  else
  {
    _ui_opacity_set(GUI_Label__MainPage__ERROR, 0); // Hide error label
  }
}

void updateOdometer(float tachometerAbs)
{
  float difference = vesc.data.tachometerAbs - bike.tachometerAbs;

  float milesTraveled = (difference / MOTOR_POLE_PAIRS) * (WHEEL_DIAMETER_INCHES * PI) / 63360.0f;
  bike.odometerMiles += milesTraveled;

  // Save to NVS only if it has increased by at least 0.1 miles since last save
  // to prevent destroying flash memory from excessive writes
  static float lastSavedOdo = bike.odometerMiles;
  if (bike.odometerMiles - lastSavedOdo >= 0.1f)
  {
    preferences.putFloat("odo", bike.odometerMiles);
    lastSavedOdo = bike.odometerMiles;
  }
}
float restoreOdometer()
{
  return preferences.getFloat("odo", 0.0f);
}

void updateBikeUI(int odo, float mph, float watts, float batteryPercent, mc_fault_code errorCode)
{
  updateSpeedometerUI(mph);
  updateOdometerUI(odo);
  updateWattsUI(watts);
  updateBatteryUI(batteryPercent);
  updateErrorUI(errorCode);
}

void updateBikeState()
{
  if (vesc.getVescValues())
  {
    if (vesc.data.tachometerAbs != bike.tachometerAbs)
    {
      updateOdometer(vesc.data.tachometerAbs);
    }
    bike.avgMotorCurrent = vesc.data.avgMotorCurrent;
    bike.avgInputCurrent = vesc.data.avgInputCurrent;
    bike.dutyCycleNow = vesc.data.dutyCycleNow;
    bike.erpm = vesc.data.rpm;
    bike.inputVoltage = vesc.data.inpVoltage;
    bike.ampHours = vesc.data.ampHours;
    bike.ampHoursCharged = vesc.data.ampHoursCharged;
    bike.wattHours = vesc.data.wattHours;
    bike.wattHoursCharged = vesc.data.wattHoursCharged;
    bike.tachometer = vesc.data.tachometer;
    bike.tachometerAbs = vesc.data.tachometerAbs;
    bike.tempMosfet = vesc.data.tempMosfet;
    bike.tempMotor = vesc.data.tempMotor;
    bike.error = (mc_fault_code)vesc.data.error; // Cast to enum
  }
}

void VESCTask(void *parameters)
{
  while (true)
  {
    updateBikeState();
    if (ui_mutex != NULL && xSemaphoreTake(ui_mutex, portMAX_DELAY) == pdTRUE)
    {
      updateBikeUI((int)bike.odometerMiles, bike.getMph(), bike.getPowerWatts(), bike.getBatteryPercentage(), bike.error);
      xSemaphoreGive(ui_mutex);
    }
    vTaskDelay(50 / portTICK_PERIOD_MS); // Update every 50ms aka 20Hz
  }
}
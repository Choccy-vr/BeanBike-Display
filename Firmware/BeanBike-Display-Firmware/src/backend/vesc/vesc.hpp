#pragma once // Prevents the file from being included multiple times

#include <VescUart.h>

extern SemaphoreHandle_t ui_mutex;

// Declare your functions or classes here
float getSpeedRpm();
void initVesc();
void updateSpeedometerUI(float MPH);
void updateOdometerUI(int miles);
void updateWattsUI(float watts);
void updateBatteryUI(float batteryPercent);
void updateErrorUI(mc_fault_code errorCode);
void updateOdometer(float tachometerAbs);
float restoreOdometer();
void updateBikeUI(int odo, float mph, float watts, float batteryPercent, mc_fault_code errorCode);
void updateBikeState();
void VESCTask(void *parameters);
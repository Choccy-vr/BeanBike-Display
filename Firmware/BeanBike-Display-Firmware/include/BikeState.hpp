#pragma once

#include <Arduino.h>
#include <VescUart.h>

#define MOTOR_POLE_PAIRS 23.0f      // Change this once you know
#define WHEEL_DIAMETER_INCHES 26.0f // Change this once you know

class BikeObject
{
public:
    float avgMotorCurrent;
    float avgInputCurrent;
    // PWM duty cycle, between 0.0 and 1.0
    float dutyCycleNow;
    float erpm;
    // Battery voltage
    float inputVoltage;
    float ampHours;
    // Regen
    float ampHoursCharged;
    float wattHours;
    // Regen
    float wattHoursCharged;
    long tachometer;
    long tachometerAbs;
    float tempMosfet;
    float tempMotor;
    mc_fault_code error;
    uint8_t majorVersion;
    uint8_t minorVersion;
    // not apart of VESC data
    int odometerMiles;

    float getRpm() { return erpm / MOTOR_POLE_PAIRS; }

    float getMph() { return (getRpm() * WHEEL_DIAMETER_INCHES * PI * 60.0f) / 63360.0f; }

    float getBatteryPercentage()
    {
        // Update with correct battery stats
        float percent = (inputVoltage - 39.0f) / (54.6f - 39.0f) * 100.0f;
        return constrain(percent, 0.0f, 100.0f);
    }

    float getPowerWatts()
    {
        return inputVoltage * avgInputCurrent;
    }

    float getTripDistanceMiles()
    {
        float wheelRevs = (float)tachometerAbs / MOTOR_POLE_PAIRS;

        float inchesTraveled = wheelRevs * (WHEEL_DIAMETER_INCHES * PI);

        return inchesTraveled / 63360.0f;
    }
};

extern BikeObject bike;
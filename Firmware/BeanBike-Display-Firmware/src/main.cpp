#include <Arduino.h>
#include <Wire.h>
#include <lvgl.h>
#include "my_display.hpp"
#include "ui/GUI.h"
#include "backend/vesc/vesc.hpp"

SemaphoreHandle_t ui_mutex = NULL;

#define BUF_SIZE (320 * 50)
static uint8_t lv_buffer[BUF_SIZE] __attribute__((aligned(4)));

static uint32_t my_tick(void)
{
    return millis();
}

void initUI()
{
    GUI_init();

    // Smooth startup animation: Sweep up from 1 to 40
    for (int i = 1; i <= 40; i++)
    {
        lv_arc_set_value(GUI_Arc__MainPage__arc, i * 2);
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", i);
        _ui_label_set_property(GUI_Label__MainPage__20, _UI_LABEL_PROPERTY_TEXT, buf);

        GUI_refresh(); // Update the display
        delay(10);     // 20ms delay controls the speed
    }

    // Sweep down from 40 back to 1
    for (int i = 40; i >= 1; i--)
    {
        lv_arc_set_value(GUI_Arc__MainPage__arc, i * 2);
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", i);
        _ui_label_set_property(GUI_Label__MainPage__20, _UI_LABEL_PROPERTY_TEXT, buf);

        GUI_refresh();
        delay(10);
    }

    lv_arc_set_value(GUI_Arc__MainPage__arc, 0);
    _ui_label_set_property(GUI_Label__MainPage__20, _UI_LABEL_PROPERTY_TEXT, "0");

    _ui_opacity_set(GUI_Label__MainPage__ERROR, 0);
    _ui_label_set_property(GUI_Label__MainPage__label, _UI_LABEL_PROPERTY_TEXT, "0");
}

void setup()
{
    Serial.begin(115200);
    Serial.println("Starting BeanBike Display...");

    // Turn backlight on
    pinMode(6, OUTPUT);
    digitalWrite(6, HIGH);
    // Setup GUI
    lv_init();
    lv_tick_set_cb(my_tick);

    // Initialise screen structure via Lovyan
    lv_lovyan_gfx_create(320, 480, lv_buffer, BUF_SIZE, true);

    ui_mutex = xSemaphoreCreateMutex();

    // Initialize VESC communication after UI is ready
    initVesc();

    initUI();

    xTaskCreatePinnedToCore(VESCTask, "VESCTask", 4096, NULL, 2, NULL, 1); // Run VESC task on core 1
}

void loop()
{
    // UI will step aside if need be
    if (ui_mutex != NULL)
    {
        if (xSemaphoreTake(ui_mutex, 0) == pdTRUE)
        {
            GUI_refresh();
            xSemaphoreGive(ui_mutex);
        }
    }
    delay(30); // ~30 FPS
}
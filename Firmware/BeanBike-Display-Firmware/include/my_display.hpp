#pragma once

#define LGFX_USE_V1
#include <LovyanGFX.hpp>

// Change the class name to exactly LGFX so LVGL's internal driver can find it
class LGFX : public lgfx::LGFX_Device {
    lgfx::Panel_ST7796  _panel_instance;
    lgfx::Bus_SPI       _bus_instance;
    lgfx::Light_PWM     _light_instance;
    lgfx::Touch_FT5x06  _touch_instance; // FT6336U uses the FT5x06 driver family

public:
    LGFX(void) {
        {
            auto cfg = _bus_instance.config();
            cfg.spi_host = SPI2_HOST;     // ESP32-S3 custom SPI host (FSPI)
            cfg.spi_mode = 0;             // SPI mode 0
            cfg.freq_write = 40000000;    // 40MHz write speed
            cfg.freq_read  = 16000000;    // 16MHz read speed
            cfg.pin_sclk = 1;             // SCLK Pin
            cfg.pin_mosi = 2;             // MOSI Pin
            cfg.pin_miso = 42;            // MISO Pin
            cfg.pin_dc   = 41;            // Data/Command Pin
            _bus_instance.config(cfg);
            _panel_instance.setBus(&_bus_instance);
        }

        {
            auto cfg = _panel_instance.config();
            cfg.pin_cs           = 39;    // Chip Select Pin
            cfg.pin_rst          = 40;    // Reset Pin
            cfg.pin_busy         = -1;    // No busy pin
            cfg.panel_width      = 320;   // Display width
            cfg.panel_height     = 480;   // Display height
            cfg.offset_x         = 0;
            cfg.offset_y         = 0;
            cfg.invert           = false;
            cfg.rgb_order        = false;
            cfg.memory_width     = 320;
            cfg.memory_height    = 480;
            _panel_instance.config(cfg);
        }

        {
            auto cfg = _light_instance.config();
            cfg.pin_bl = 6;               // Backlight control pin
            cfg.freq   = 44100;           // PWM frequency
            cfg.pwm_channel = 1;          // PWM channel
            _light_instance.config(cfg);
            _panel_instance.setLight(&_light_instance);
        }

        {
            auto cfg = _touch_instance.config();
            cfg.x_min      = 0;
            cfg.x_max      = 319;
            cfg.y_min      = 0;
            cfg.y_max      = 479;
            cfg.pin_sda    = 15;           // I2C SDA Pin
            cfg.pin_scl    = 7;           // I2C SCL Pin
            cfg.pin_int    = 17;           // Interrupt Pin
            cfg.pin_rst    = 16;          
            cfg.i2c_port   = 0;           // FIX: Changed from i2c_ch to i2c_port
            cfg.i2c_addr   = 0x38;        // FT6336U standard I2C address
            cfg.freq       = 400000;      // Standard I2C clock speed (400kHz)
            _touch_instance.config(cfg);
            _panel_instance.setTouch(&_touch_instance);
        }

        setPanel(&_panel_instance);
    }
};
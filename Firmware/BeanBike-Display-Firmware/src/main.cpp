#include <Arduino.h>
#include <Wire.h>
#include <lvgl.h>
#include "my_display.hpp" 

#define TOUCH_I2C_ADD 0x38
#define BUF_SIZE (320 * 50)
static uint8_t lv_buffer[BUF_SIZE] __attribute__((aligned(4)));

// Physical Wire Connections matching Waveshare Wiki
const int I2C_SDA = 5;
const int I2C_SCL = 4;
const int TP_INT  = 8;
const int HW_RST  = 40; // Shares layout reset line

static uint32_t my_tick(void)
{
    return millis();
}

// Low-level diagnostic check to see if the IC is responding over standard Wire
bool check_touch_pressed(int32_t *x, int32_t *y) {
    // Read the registers from FT6336U (0x02 tells us the number of touch points)
    Wire.beginTransmission(TOUCH_I2C_ADD);
    Wire.write(0x02); 
    if (Wire.endTransmission() != 0) return false; // I2C bus dropped or unmapped

    Wire.requestFrom(TOUCH_I2C_ADD, 5);
    if (Wire.available() >= 5) {
        uint8_t touch_count = Wire.read() & 0x0F;
        if (touch_count == 0 || touch_count > 2) return false;

        // Parse high and low bytes for layout coordinates
        uint8_t x_msb = Wire.read() & 0x0F;
        uint8_t x_lsb = Wire.read();
        uint8_t y_msb = Wire.read() & 0x0F;
        uint8_t y_lsb = Wire.read();

        *x = (x_msb << 8) | x_lsb;
        *y = (y_msb << 8) | y_lsb;
        return true;
    }
    return false;
}

// ----------------------------------------------------
// LVGL Input Driver Integration
// ----------------------------------------------------
void my_touchpad_read(lv_indev_t * indev, lv_indev_data_t * data)
{
    int32_t touchX = 0;
    int32_t touchY = 0;

    // Use our native wire scanner method directly
    if(check_touch_pressed(&touchX, &touchY)) {
        data->state = LV_INDEV_STATE_PRESSED;
        
        // Handle screen rotation matching (Swap or Invert if mapping feels inverted)
        data->point.x = touchX;
        data->point.y = touchY;

        Serial.printf("[TOUCH HIT] Raw X: %d | Raw Y: %d\n", touchX, touchY);
    } else {
        data->state = LV_INDEV_STATE_RELEASED;
    }
}

static void button_event_cb(lv_event_t * e)
{
    if(lv_event_get_code(e) == LV_EVENT_CLICKED) {
        static uint8_t cnt = 0;
        cnt++;
        lv_label_set_text_fmt(lv_obj_get_child((lv_obj_t *)lv_event_get_target(e), 0), "Tapped! Count: %d", cnt);
    }
}

static void slider_event_cb(lv_event_t * e)
{
    lv_obj_t * slider = (lv_obj_t *)lv_event_get_target(e);
    lv_obj_t * slider_label = (lv_obj_t *)lv_event_get_user_data(e);
    lv_label_set_text_fmt(slider_label, "Value: %d%%", (int)lv_slider_get_value(slider));
}

void create_test_dashboard() {
    lv_obj_t *title = lv_label_create(lv_screen_active());
    lv_label_set_text(title, "Touch Test");
    lv_obj_set_style_text_font(title, &lv_font_montserrat_14, 0);
    lv_obj_align(title, LV_ALIGN_TOP_MID, 0, 20);

    lv_obj_t *btn = lv_button_create(lv_screen_active());
    lv_obj_set_size(btn, 160, 50);
    lv_obj_align(btn, LV_ALIGN_TOP_MID, 0, 70);
    lv_obj_add_event_cb(btn, button_event_cb, LV_EVENT_CLICKED, NULL);

    lv_obj_t *btn_label = lv_label_create(btn);
    lv_label_set_text(btn_label, "Tap to Test");
    lv_obj_center(btn_label);

    lv_obj_t *slider_label = lv_label_create(lv_screen_active());
    lv_label_set_text(slider_label, "Value: 50%");
    lv_obj_align(slider_label, LV_ALIGN_BOTTOM_MID, 0, -90);

    lv_obj_t *slider = lv_slider_create(lv_screen_active());
    lv_obj_set_size(slider, 240, 15);
    lv_slider_set_value(slider, 50, LV_ANIM_OFF);
    lv_obj_align(slider, LV_ALIGN_BOTTOM_MID, 0, -60);
    lv_obj_add_event_cb(slider, slider_event_cb, LV_EVENT_VALUE_CHANGED, slider_label);
}

void setup() {
    Serial.begin(115200);
    delay(500);
    Serial.println("Starting Hardware Boot...");

    // 1. Force Hard Reset on the Panel & Touch IC to clear sleep states
    pinMode(HW_RST, OUTPUT);
    digitalWrite(HW_RST, LOW);
    delay(50);
    digitalWrite(HW_RST, HIGH);
    delay(100); 

    // Setup Interrupt input line layout
    pinMode(TP_INT, INPUT_PULLUP);

    // 2. Initialize Native ESP32 I2C bus explicitly
    if (!Wire.begin(I2C_SDA, I2C_SCL, 400000U)) {
        Serial.println("CRITICAL ERROR: Native Wire master init failed!");
    } else {
        Serial.println("I2C Wire bus established successfully.");
    }

    // Turn backlight on
    pinMode(6, OUTPUT);
    digitalWrite(6, HIGH);

    lv_init();
    lv_tick_set_cb(my_tick);

    // Initialise screen structure via Lovyan
    lv_lovyan_gfx_create(320, 480, lv_buffer, BUF_SIZE, true);

    // Register Pointer/Touch engine inside LVGL
    lv_indev_t * indev = lv_indev_create();
    lv_indev_set_type(indev, LV_INDEV_TYPE_POINTER);
    lv_indev_set_read_cb(indev, my_touchpad_read);

    create_test_dashboard();
}

void loop() {
    lv_timer_handler(); 
    delay(5);
}
#include "../GUI.h"

#ifdef GUI_EXTERNAL_CUSTOM_CALLBACK_FUNCTION_FILE
#include GUI_EXTERNAL_CUSTOM_CALLBACK_FUNCTION_FILE
#endif

void GUI_event__Screen__MainPage__Gesture_Left(lv_event_t *event) {
  if (lv_indev_get_gesture_dir(lv_indev_active()) == LV_DIR_LEFT) {
    // WARN: Change-screen references unknown screen ID "null"
  }
}

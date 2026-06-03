#include "../GUI.h"

void GUI_initScreen__MainPage() {
  GUI_Screen__MainPage = lv_obj_create(NULL);
  lv_obj_remove_flag(GUI_Screen__MainPage, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_add_event_cb(GUI_Screen__MainPage,
                      GUI_event__Screen__MainPage__Gesture_Left,
                      LV_EVENT_GESTURE, NULL);
  GUI_Container__MainPage__Top_Bar = lv_obj_create(GUI_Screen__MainPage);
  lv_obj_remove_style_all(GUI_Container__MainPage__Top_Bar);
  lv_obj_remove_flag(GUI_Container__MainPage__Top_Bar, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__MainPage__Top_Bar, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Container__MainPage__Top_Bar, lv_pct(100),
                  LV_SIZE_CONTENT);

  GUI_Container__MainPage__Power =
      lv_obj_create(GUI_Container__MainPage__Top_Bar);
  lv_obj_remove_style_all(GUI_Container__MainPage__Power);
  lv_obj_remove_flag(GUI_Container__MainPage__Power, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__MainPage__Power, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Container__MainPage__Power, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Image__MainPage__bolt = lv_image_create(GUI_Container__MainPage__Power);
  lv_obj_remove_flag(GUI_Image__MainPage__bolt, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Image__MainPage__bolt, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Image__MainPage__bolt, 32, 32);

  GUI_Label__MainPage__power_text =
      lv_label_create(GUI_Container__MainPage__Power);
  lv_obj_remove_flag(GUI_Label__MainPage__power_text, LV_OBJ_FLAG_SCROLLABLE);
  lv_label_set_long_mode(GUI_Label__MainPage__power_text, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__power_text, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Label__MainPage__power_text, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Container__MainPage__Battery =
      lv_obj_create(GUI_Container__MainPage__Top_Bar);
  lv_obj_remove_style_all(GUI_Container__MainPage__Battery);
  lv_obj_remove_flag(GUI_Container__MainPage__Battery, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__MainPage__Battery, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Container__MainPage__Battery, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__MainPage__Battery_text =
      lv_label_create(GUI_Container__MainPage__Battery);
  lv_obj_remove_flag(GUI_Label__MainPage__Battery_text, LV_OBJ_FLAG_SCROLLABLE);
  lv_label_set_long_mode(GUI_Label__MainPage__Battery_text, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__Battery_text, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Label__MainPage__Battery_text, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Image__MainPage__battery_indicator =
      lv_image_create(GUI_Container__MainPage__Battery);
  lv_obj_remove_flag(GUI_Image__MainPage__battery_indicator,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Image__MainPage__battery_indicator, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Image__MainPage__battery_indicator, 32, 32);

  GUI_Container__MainPage__Main_View = lv_obj_create(GUI_Screen__MainPage);
  lv_obj_remove_style_all(GUI_Container__MainPage__Main_View);
  lv_obj_remove_flag(GUI_Container__MainPage__Main_View,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_flex_grow(GUI_Container__MainPage__Main_View, 1);
  lv_obj_set_align(GUI_Container__MainPage__Main_View, LV_ALIGN_CENTER);
  lv_obj_set_width(GUI_Container__MainPage__Main_View, lv_pct(100));

  GUI_Container__MainPage__Speed =
      lv_obj_create(GUI_Container__MainPage__Main_View);
  lv_obj_remove_style_all(GUI_Container__MainPage__Speed);
  lv_obj_remove_flag(GUI_Container__MainPage__Speed, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__MainPage__Speed, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Container__MainPage__Speed, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Container__MainPage__Speed_Text =
      lv_obj_create(GUI_Container__MainPage__Speed);
  lv_obj_remove_style_all(GUI_Container__MainPage__Speed_Text);
  lv_obj_remove_flag(GUI_Container__MainPage__Speed_Text,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__MainPage__Speed_Text, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Container__MainPage__Speed_Text, 160, LV_SIZE_CONTENT);

  GUI_Label__MainPage__20 =
      lv_label_create(GUI_Container__MainPage__Speed_Text);
  lv_obj_remove_flag(GUI_Label__MainPage__20, LV_OBJ_FLAG_SCROLLABLE);
  lv_label_set_long_mode(GUI_Label__MainPage__20, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__20, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Label__MainPage__20, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

  GUI_Label__MainPage__Mph =
      lv_label_create(GUI_Container__MainPage__Speed_Text);
  lv_obj_remove_flag(GUI_Label__MainPage__Mph, LV_OBJ_FLAG_SCROLLABLE);
  lv_label_set_long_mode(GUI_Label__MainPage__Mph, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__Mph, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Label__MainPage__Mph, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

  GUI_Arc__MainPage__arc = lv_arc_create(GUI_Container__MainPage__Speed);
  lv_arc_set_value(GUI_Arc__MainPage__arc, 40);
  lv_arc_set_bg_angles(GUI_Arc__MainPage__arc, 140, 40);
  lv_arc_set_range(GUI_Arc__MainPage__arc, 0, 80);
  lv_obj_set_align(GUI_Arc__MainPage__arc, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Arc__MainPage__arc, 270, 270);

  GUI_Container__MainPage__markers =
      lv_obj_create(GUI_Container__MainPage__Speed);
  lv_obj_remove_style_all(GUI_Container__MainPage__markers);
  lv_obj_remove_flag(GUI_Container__MainPage__markers, LV_OBJ_FLAG_CLICKABLE);
  lv_obj_remove_flag(GUI_Container__MainPage__markers, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__MainPage__markers, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Container__MainPage__markers, 444, 302);

  GUI_Label__MainPage__5marker =
      lv_label_create(GUI_Container__MainPage__markers);
  lv_label_set_long_mode(GUI_Label__MainPage__5marker, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__5marker, LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Label__MainPage__5marker, -142, 20);
  lv_obj_set_size(GUI_Label__MainPage__5marker, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__MainPage__10marker =
      lv_label_create(GUI_Container__MainPage__markers);
  lv_label_set_long_mode(GUI_Label__MainPage__10marker, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__10marker, LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Label__MainPage__10marker, -137, -58);
  lv_obj_set_size(GUI_Label__MainPage__10marker, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__MainPage__15marker =
      lv_label_create(GUI_Container__MainPage__markers);
  lv_label_set_long_mode(GUI_Label__MainPage__15marker, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__15marker, LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Label__MainPage__15marker, -81, -126);
  lv_obj_set_size(GUI_Label__MainPage__15marker, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__MainPage__20marker =
      lv_label_create(GUI_Container__MainPage__markers);
  lv_label_set_long_mode(GUI_Label__MainPage__20marker, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__20marker, LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Label__MainPage__20marker, 1, -144);
  lv_obj_set_size(GUI_Label__MainPage__20marker, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__MainPage__25marker =
      lv_label_create(GUI_Container__MainPage__markers);
  lv_label_set_long_mode(GUI_Label__MainPage__25marker, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__25marker, LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Label__MainPage__25marker, 83, -126);
  lv_obj_set_size(GUI_Label__MainPage__25marker, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__MainPage__30marker =
      lv_label_create(GUI_Container__MainPage__markers);
  lv_label_set_long_mode(GUI_Label__MainPage__30marker, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__30marker, LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Label__MainPage__30marker, 137, -60);
  lv_obj_set_size(GUI_Label__MainPage__30marker, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__MainPage__35marker =
      lv_label_create(GUI_Container__MainPage__markers);
  lv_label_set_long_mode(GUI_Label__MainPage__35marker, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__35marker, LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Label__MainPage__35marker, 146, 20);
  lv_obj_set_size(GUI_Label__MainPage__35marker, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__MainPage__ERROR =
      lv_label_create(GUI_Container__MainPage__markers);
  lv_label_set_long_mode(GUI_Label__MainPage__ERROR, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__ERROR, LV_ALIGN_CENTER);
  lv_obj_set_y(GUI_Label__MainPage__ERROR, -83);
  lv_obj_set_size(GUI_Label__MainPage__ERROR, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

  GUI_Container__MainPage__container =
      lv_obj_create(GUI_Container__MainPage__Main_View);
  lv_obj_remove_style_all(GUI_Container__MainPage__container);
  lv_obj_remove_flag(GUI_Container__MainPage__container, LV_OBJ_FLAG_CLICKABLE);
  lv_obj_remove_flag(GUI_Container__MainPage__container,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__MainPage__container, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Container__MainPage__container, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__MainPage__odo_label =
      lv_label_create(GUI_Container__MainPage__container);
  lv_label_set_long_mode(GUI_Label__MainPage__odo_label, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__odo_label, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Label__MainPage__odo_label, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__MainPage__label =
      lv_label_create(GUI_Container__MainPage__container);
  lv_label_set_long_mode(GUI_Label__MainPage__label, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__MainPage__label, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Label__MainPage__label, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

  GUI_initScreenStyles__MainPage();
  GUI_initScreenTexts__MainPage();
}

void GUI_initScreenTexts__MainPage() {
  lv_label_set_text(GUI_Label__MainPage__power_text, "537W");
  lv_label_set_text(GUI_Label__MainPage__Battery_text, "87%");
  lv_label_set_text(GUI_Label__MainPage__20, "20");
  lv_label_set_text(GUI_Label__MainPage__Mph, "Mph");
  lv_label_set_text(GUI_Label__MainPage__5marker, "5");
  lv_label_set_text(GUI_Label__MainPage__10marker, "10");
  lv_label_set_text(GUI_Label__MainPage__15marker, "15");
  lv_label_set_text(GUI_Label__MainPage__20marker, "20");
  lv_label_set_text(GUI_Label__MainPage__25marker, "25");
  lv_label_set_text(GUI_Label__MainPage__30marker, "30");
  lv_label_set_text(GUI_Label__MainPage__35marker, "35");
  lv_label_set_text(GUI_Label__MainPage__ERROR, "ERROR");
  lv_label_set_text(GUI_Label__MainPage__odo_label, "ODO");
  lv_label_set_text(GUI_Label__MainPage__label, "9999");
}

void GUI_initScreenStyles__MainPage() {
  lv_obj_add_style(GUI_Screen__MainPage, &GUI_Style__class_RwLBzI0OPtSVGF__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__MainPage__Top_Bar,
                   &GUI_Style__class_xYsC99OLfZt28s__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__MainPage__Power,
                   &GUI_Style__class_aulPVROhNcgkw3__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_image_set_src(GUI_Image__MainPage__bolt,
                   &upload_bolt_32x32_6e0c2d7d38414e6e8dba8e20e75c1c6b_png);

  lv_obj_add_style(GUI_Image__MainPage__bolt,
                   &GUI_Style__class_WKrCtJNQJjhKUs__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__power_text,
                   &GUI_Style__class_UvVlLEnU1PjKHs__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__MainPage__Battery,
                   &GUI_Style__class_dLajJBdOH3VUj5__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__Battery_text,
                   &GUI_Style__class_lyVOmwNrONTC4Z__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_image_set_src(
      GUI_Image__MainPage__battery_indicator,
      &upload_battery_indicator_32x32_0b9e71469aac49119bac82c9dcd3e8d7_png);

  lv_obj_add_style(GUI_Image__MainPage__battery_indicator,
                   &GUI_Style__class_xEoeSyk88eeNZX__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__MainPage__Main_View,
                   &GUI_Style__class_EIYxskGPdYjF6g__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__MainPage__Speed,
                   &GUI_Style__class_N0G0yFr8uMoI0t__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__MainPage__Speed_Text,
                   &GUI_Style__class_HsEg6zmovydppI__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__20, &GUI_Style__class_CmgewDFgM0CFOL__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__Mph, &GUI_Style__class_hzfpq4yCPrCIV1__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Arc__MainPage__arc, &GUI_Style__class_LOO0DeF1jmKv0D__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_add_style(GUI_Arc__MainPage__arc, &GUI_Style__class_1QzILTYDVWqVb8__,
                   LV_PART_KNOB | LV_STATE_DEFAULT);
  lv_obj_add_style(GUI_Arc__MainPage__arc, &GUI_Style__class_Og8Ln1ir1qMMvi__,
                   LV_PART_INDICATOR | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__5marker,
                   &GUI_Style__class_vB4VMRXdeCXgeF__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__10marker,
                   &GUI_Style__class_7B8xLr2QFpFrep__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__15marker,
                   &GUI_Style__class_tvGLgQSVFGr2CR__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__20marker,
                   &GUI_Style__class_hkNpQOw3pMdDyr__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__25marker,
                   &GUI_Style__class_OOrMAZkQ4fJC9M__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__30marker,
                   &GUI_Style__class_61atTRxS5uHKdD__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__35marker,
                   &GUI_Style__class_OTr9Zz9gnng3Yp__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__ERROR,
                   &GUI_Style__class_OVQMu72rxICiln__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__MainPage__container,
                   &GUI_Style__class_PSh2DcZ53DkxCI__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__odo_label,
                   &GUI_Style__class_ZaJfoY0Yibal83__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__MainPage__label,
                   &GUI_Style__class_dV0lMwg70AyM1Z__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);
}

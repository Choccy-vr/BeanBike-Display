#ifndef _GUI_CORE_H
#define _GUI_CORE_H

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

// Animation timeline declarations, one for each event

// Screen-specific function declarations
void GUI_initScreen__MainPage();
void GUI_initScreenTexts__MainPage();
void GUI_initScreenStyles__MainPage();

extern lv_style_t GUI_Style__class_RwLBzI0OPtSVGF__;
extern lv_style_t GUI_Style__class_xYsC99OLfZt28s__;
extern lv_style_t GUI_Style__class_aulPVROhNcgkw3__;
extern lv_style_t GUI_Style__class_WKrCtJNQJjhKUs__;
extern lv_style_t GUI_Style__class_UvVlLEnU1PjKHs__;
extern lv_style_t GUI_Style__class_dLajJBdOH3VUj5__;
extern lv_style_t GUI_Style__class_lyVOmwNrONTC4Z__;
extern lv_style_t GUI_Style__class_xEoeSyk88eeNZX__;
extern lv_style_t GUI_Style__class_EIYxskGPdYjF6g__;
extern lv_style_t GUI_Style__class_N0G0yFr8uMoI0t__;
extern lv_style_t GUI_Style__class_HsEg6zmovydppI__;
extern lv_style_t GUI_Style__class_CmgewDFgM0CFOL__;
extern lv_style_t GUI_Style__class_hzfpq4yCPrCIV1__;
extern lv_style_t GUI_Style__class_LOO0DeF1jmKv0D__;
extern lv_style_t GUI_Style__class_1QzILTYDVWqVb8__;
extern lv_style_t GUI_Style__class_Og8Ln1ir1qMMvi__;
extern lv_style_t GUI_Style__class_vB4VMRXdeCXgeF__;
extern lv_style_t GUI_Style__class_7B8xLr2QFpFrep__;
extern lv_style_t GUI_Style__class_tvGLgQSVFGr2CR__;
extern lv_style_t GUI_Style__class_hkNpQOw3pMdDyr__;
extern lv_style_t GUI_Style__class_OOrMAZkQ4fJC9M__;
extern lv_style_t GUI_Style__class_61atTRxS5uHKdD__;
extern lv_style_t GUI_Style__class_OTr9Zz9gnng3Yp__;
extern lv_style_t GUI_Style__class_OVQMu72rxICiln__;
extern lv_style_t GUI_Style__class_PSh2DcZ53DkxCI__;
extern lv_style_t GUI_Style__class_ZaJfoY0Yibal83__;
extern lv_style_t GUI_Style__class_dV0lMwg70AyM1Z__;

void GUI_load();

void GUI_init();

void GUI_refresh();

void GUI_initHAL();
void HAL_init();

void GUI_initFramework();

void GUI_loadContent();

void GUI_initContent();

void GUI_initTheme();

void GUI_initScreens();

void GUI_loadFirstScreen();

void GUI_initScreenContents();

void GUI_initScreenTexts();

void GUI_initScreenStyles();

void GUI_initGlobalStyles();

void GUI_initAnimations();

void GUI_event__Screen__MainPage__Gesture_Left(lv_event_t *event);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif

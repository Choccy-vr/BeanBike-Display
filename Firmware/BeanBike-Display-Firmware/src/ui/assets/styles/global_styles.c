#include "../../GUI.h"

void GUI_initGlobalStyles() {
  lv_style_init(&GUI_Style__class_RwLBzI0OPtSVGF__);
  lv_style_set_bg_color(&GUI_Style__class_RwLBzI0OPtSVGF__,
                        lv_color_make(248, 251, 240));
  lv_style_set_bg_opa(&GUI_Style__class_RwLBzI0OPtSVGF__, 255);
  lv_style_set_radius(&GUI_Style__class_RwLBzI0OPtSVGF__, 0);
  lv_style_set_pad_all(&GUI_Style__class_RwLBzI0OPtSVGF__, 16);
  lv_style_set_flex_flow(&GUI_Style__class_RwLBzI0OPtSVGF__,
                         LV_FLEX_FLOW_COLUMN);
  lv_style_set_flex_main_place(&GUI_Style__class_RwLBzI0OPtSVGF__,
                               LV_FLEX_ALIGN_START);
  lv_style_set_flex_track_place(&GUI_Style__class_RwLBzI0OPtSVGF__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_RwLBzI0OPtSVGF__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_RwLBzI0OPtSVGF__, 10);
  lv_style_set_pad_column(&GUI_Style__class_RwLBzI0OPtSVGF__, 0);
  lv_style_set_layout(&GUI_Style__class_RwLBzI0OPtSVGF__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_xYsC99OLfZt28s__);
  lv_style_set_bg_color(&GUI_Style__class_xYsC99OLfZt28s__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_xYsC99OLfZt28s__, 0);
  lv_style_set_radius(&GUI_Style__class_xYsC99OLfZt28s__, 0);
  lv_style_set_pad_all(&GUI_Style__class_xYsC99OLfZt28s__, 0);
  lv_style_set_flex_flow(&GUI_Style__class_xYsC99OLfZt28s__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_xYsC99OLfZt28s__,
                               LV_FLEX_ALIGN_SPACE_BETWEEN);
  lv_style_set_flex_track_place(&GUI_Style__class_xYsC99OLfZt28s__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_xYsC99OLfZt28s__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_xYsC99OLfZt28s__, 0);
  lv_style_set_pad_column(&GUI_Style__class_xYsC99OLfZt28s__, 0);
  lv_style_set_layout(&GUI_Style__class_xYsC99OLfZt28s__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_aulPVROhNcgkw3__);
  lv_style_set_bg_color(&GUI_Style__class_aulPVROhNcgkw3__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_aulPVROhNcgkw3__, 0);
  lv_style_set_radius(&GUI_Style__class_aulPVROhNcgkw3__, 0);
  lv_style_set_pad_all(&GUI_Style__class_aulPVROhNcgkw3__, 0);
  lv_style_set_flex_flow(&GUI_Style__class_aulPVROhNcgkw3__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_aulPVROhNcgkw3__,
                               LV_FLEX_ALIGN_START);
  lv_style_set_flex_track_place(&GUI_Style__class_aulPVROhNcgkw3__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_aulPVROhNcgkw3__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_aulPVROhNcgkw3__, 0);
  lv_style_set_pad_column(&GUI_Style__class_aulPVROhNcgkw3__, 8);
  lv_style_set_layout(&GUI_Style__class_aulPVROhNcgkw3__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_WKrCtJNQJjhKUs__);
  lv_style_set_bg_color(&GUI_Style__class_WKrCtJNQJjhKUs__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_WKrCtJNQJjhKUs__, 0);

  lv_style_init(&GUI_Style__class_UvVlLEnU1PjKHs__);
  lv_style_set_pad_left(&GUI_Style__class_UvVlLEnU1PjKHs__, 0);
  lv_style_set_pad_right(&GUI_Style__class_UvVlLEnU1PjKHs__, 0);
  lv_style_set_pad_top(&GUI_Style__class_UvVlLEnU1PjKHs__, 3);
  lv_style_set_pad_bottom(&GUI_Style__class_UvVlLEnU1PjKHs__, 3);
  lv_style_set_text_letter_space(&GUI_Style__class_UvVlLEnU1PjKHs__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_UvVlLEnU1PjKHs__, 6);
  lv_style_set_text_align(&GUI_Style__class_UvVlLEnU1PjKHs__,
                          LV_TEXT_ALIGN_CENTER);
  lv_style_set_text_color(&GUI_Style__class_UvVlLEnU1PjKHs__,
                          lv_color_make(25, 29, 23));
  lv_style_set_text_opa(&GUI_Style__class_UvVlLEnU1PjKHs__, 255);
  lv_style_set_text_font(&GUI_Style__class_UvVlLEnU1PjKHs__, &roboto_22_400);

  lv_style_init(&GUI_Style__class_dLajJBdOH3VUj5__);
  lv_style_set_bg_color(&GUI_Style__class_dLajJBdOH3VUj5__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_dLajJBdOH3VUj5__, 0);
  lv_style_set_radius(&GUI_Style__class_dLajJBdOH3VUj5__, 0);
  lv_style_set_pad_all(&GUI_Style__class_dLajJBdOH3VUj5__, 0);
  lv_style_set_flex_flow(&GUI_Style__class_dLajJBdOH3VUj5__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_dLajJBdOH3VUj5__,
                               LV_FLEX_ALIGN_START);
  lv_style_set_flex_track_place(&GUI_Style__class_dLajJBdOH3VUj5__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_dLajJBdOH3VUj5__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_dLajJBdOH3VUj5__, 0);
  lv_style_set_pad_column(&GUI_Style__class_dLajJBdOH3VUj5__, 8);
  lv_style_set_layout(&GUI_Style__class_dLajJBdOH3VUj5__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_lyVOmwNrONTC4Z__);
  lv_style_set_pad_left(&GUI_Style__class_lyVOmwNrONTC4Z__, 0);
  lv_style_set_pad_right(&GUI_Style__class_lyVOmwNrONTC4Z__, 0);
  lv_style_set_pad_top(&GUI_Style__class_lyVOmwNrONTC4Z__, 3);
  lv_style_set_pad_bottom(&GUI_Style__class_lyVOmwNrONTC4Z__, 3);
  lv_style_set_text_letter_space(&GUI_Style__class_lyVOmwNrONTC4Z__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_lyVOmwNrONTC4Z__, 6);
  lv_style_set_text_align(&GUI_Style__class_lyVOmwNrONTC4Z__,
                          LV_TEXT_ALIGN_CENTER);
  lv_style_set_text_color(&GUI_Style__class_lyVOmwNrONTC4Z__,
                          lv_color_make(25, 29, 23));
  lv_style_set_text_opa(&GUI_Style__class_lyVOmwNrONTC4Z__, 255);
  lv_style_set_text_font(&GUI_Style__class_lyVOmwNrONTC4Z__, &roboto_22_400);

  lv_style_init(&GUI_Style__class_xEoeSyk88eeNZX__);
  lv_style_set_bg_color(&GUI_Style__class_xEoeSyk88eeNZX__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_xEoeSyk88eeNZX__, 0);

  lv_style_init(&GUI_Style__class_EIYxskGPdYjF6g__);
  lv_style_set_bg_color(&GUI_Style__class_EIYxskGPdYjF6g__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_EIYxskGPdYjF6g__, 0);
  lv_style_set_radius(&GUI_Style__class_EIYxskGPdYjF6g__, 0);
  lv_style_set_flex_flow(&GUI_Style__class_EIYxskGPdYjF6g__,
                         LV_FLEX_FLOW_COLUMN);
  lv_style_set_flex_main_place(&GUI_Style__class_EIYxskGPdYjF6g__,
                               LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_track_place(&GUI_Style__class_EIYxskGPdYjF6g__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_EIYxskGPdYjF6g__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_EIYxskGPdYjF6g__, 1);
  lv_style_set_pad_column(&GUI_Style__class_EIYxskGPdYjF6g__, 0);
  lv_style_set_layout(&GUI_Style__class_EIYxskGPdYjF6g__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_N0G0yFr8uMoI0t__);
  lv_style_set_bg_color(&GUI_Style__class_N0G0yFr8uMoI0t__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_N0G0yFr8uMoI0t__, 0);
  lv_style_set_radius(&GUI_Style__class_N0G0yFr8uMoI0t__, 0);

  lv_style_init(&GUI_Style__class_HsEg6zmovydppI__);
  lv_style_set_bg_color(&GUI_Style__class_HsEg6zmovydppI__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_HsEg6zmovydppI__, 0);
  lv_style_set_radius(&GUI_Style__class_HsEg6zmovydppI__, 0);
  lv_style_set_pad_all(&GUI_Style__class_HsEg6zmovydppI__, 0);
  lv_style_set_flex_flow(&GUI_Style__class_HsEg6zmovydppI__,
                         LV_FLEX_FLOW_COLUMN);
  lv_style_set_flex_main_place(&GUI_Style__class_HsEg6zmovydppI__,
                               LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_track_place(&GUI_Style__class_HsEg6zmovydppI__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_HsEg6zmovydppI__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_HsEg6zmovydppI__, 0);
  lv_style_set_pad_column(&GUI_Style__class_HsEg6zmovydppI__, 0);
  lv_style_set_layout(&GUI_Style__class_HsEg6zmovydppI__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_CmgewDFgM0CFOL__);
  lv_style_set_text_letter_space(&GUI_Style__class_CmgewDFgM0CFOL__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_CmgewDFgM0CFOL__, 0);
  lv_style_set_text_align(&GUI_Style__class_CmgewDFgM0CFOL__,
                          LV_TEXT_ALIGN_CENTER);
  lv_style_set_text_color(&GUI_Style__class_CmgewDFgM0CFOL__,
                          lv_color_make(25, 29, 23));
  lv_style_set_text_opa(&GUI_Style__class_CmgewDFgM0CFOL__, 255);
  lv_style_set_text_font(&GUI_Style__class_CmgewDFgM0CFOL__, &orbitron_96_400);

  lv_style_init(&GUI_Style__class_hzfpq4yCPrCIV1__);
  lv_style_set_pad_left(&GUI_Style__class_hzfpq4yCPrCIV1__, 0);
  lv_style_set_pad_right(&GUI_Style__class_hzfpq4yCPrCIV1__, 0);
  lv_style_set_pad_top(&GUI_Style__class_hzfpq4yCPrCIV1__, 6);
  lv_style_set_pad_bottom(&GUI_Style__class_hzfpq4yCPrCIV1__, 6);
  lv_style_set_text_letter_space(&GUI_Style__class_hzfpq4yCPrCIV1__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_hzfpq4yCPrCIV1__, 12);
  lv_style_set_text_align(&GUI_Style__class_hzfpq4yCPrCIV1__,
                          LV_TEXT_ALIGN_RIGHT);
  lv_style_set_text_color(&GUI_Style__class_hzfpq4yCPrCIV1__,
                          lv_color_make(25, 29, 23));
  lv_style_set_text_opa(&GUI_Style__class_hzfpq4yCPrCIV1__, 255);
  lv_style_set_text_font(&GUI_Style__class_hzfpq4yCPrCIV1__, &orbitron_16_700);

  lv_style_init(&GUI_Style__class_LOO0DeF1jmKv0D__);
  lv_style_set_arc_color(&GUI_Style__class_LOO0DeF1jmKv0D__,
                         lv_color_make(215, 232, 204));
  lv_style_set_arc_opa(&GUI_Style__class_LOO0DeF1jmKv0D__, 255);
  lv_style_set_arc_width(&GUI_Style__class_LOO0DeF1jmKv0D__, 10);
  lv_style_set_arc_rounded(&GUI_Style__class_LOO0DeF1jmKv0D__, true);

  lv_style_init(&GUI_Style__class_1QzILTYDVWqVb8__);
  lv_style_set_bg_color(&GUI_Style__class_1QzILTYDVWqVb8__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_1QzILTYDVWqVb8__, 0);
  lv_style_set_radius(&GUI_Style__class_1QzILTYDVWqVb8__, 0);

  lv_style_init(&GUI_Style__class_Og8Ln1ir1qMMvi__);
  lv_style_set_arc_color(&GUI_Style__class_Og8Ln1ir1qMMvi__,
                         lv_color_make(64, 104, 53));
  lv_style_set_arc_opa(&GUI_Style__class_Og8Ln1ir1qMMvi__, 255);
  lv_style_set_arc_width(&GUI_Style__class_Og8Ln1ir1qMMvi__, 10);
  lv_style_set_arc_rounded(&GUI_Style__class_Og8Ln1ir1qMMvi__, true);

  lv_style_init(&GUI_Style__class_vB4VMRXdeCXgeF__);
  lv_style_set_text_font(&GUI_Style__class_vB4VMRXdeCXgeF__, &label);
  lv_style_set_text_color(&GUI_Style__class_vB4VMRXdeCXgeF__,
                          lv_color_make(0, 0, 0));
  lv_style_set_text_opa(&GUI_Style__class_vB4VMRXdeCXgeF__, 255);
  lv_style_set_text_letter_space(&GUI_Style__class_vB4VMRXdeCXgeF__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_vB4VMRXdeCXgeF__, 0);
  lv_style_set_text_align(&GUI_Style__class_vB4VMRXdeCXgeF__,
                          LV_TEXT_ALIGN_LEFT);

  lv_style_init(&GUI_Style__class_7B8xLr2QFpFrep__);
  lv_style_set_text_font(&GUI_Style__class_7B8xLr2QFpFrep__, &label);
  lv_style_set_text_color(&GUI_Style__class_7B8xLr2QFpFrep__,
                          lv_color_make(0, 0, 0));
  lv_style_set_text_opa(&GUI_Style__class_7B8xLr2QFpFrep__, 255);
  lv_style_set_text_letter_space(&GUI_Style__class_7B8xLr2QFpFrep__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_7B8xLr2QFpFrep__, 0);
  lv_style_set_text_align(&GUI_Style__class_7B8xLr2QFpFrep__,
                          LV_TEXT_ALIGN_LEFT);

  lv_style_init(&GUI_Style__class_tvGLgQSVFGr2CR__);
  lv_style_set_text_font(&GUI_Style__class_tvGLgQSVFGr2CR__, &label);
  lv_style_set_text_color(&GUI_Style__class_tvGLgQSVFGr2CR__,
                          lv_color_make(0, 0, 0));
  lv_style_set_text_opa(&GUI_Style__class_tvGLgQSVFGr2CR__, 255);
  lv_style_set_text_letter_space(&GUI_Style__class_tvGLgQSVFGr2CR__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_tvGLgQSVFGr2CR__, 0);
  lv_style_set_text_align(&GUI_Style__class_tvGLgQSVFGr2CR__,
                          LV_TEXT_ALIGN_LEFT);

  lv_style_init(&GUI_Style__class_hkNpQOw3pMdDyr__);
  lv_style_set_text_font(&GUI_Style__class_hkNpQOw3pMdDyr__, &label);
  lv_style_set_text_color(&GUI_Style__class_hkNpQOw3pMdDyr__,
                          lv_color_make(0, 0, 0));
  lv_style_set_text_opa(&GUI_Style__class_hkNpQOw3pMdDyr__, 255);
  lv_style_set_text_letter_space(&GUI_Style__class_hkNpQOw3pMdDyr__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_hkNpQOw3pMdDyr__, 0);
  lv_style_set_text_align(&GUI_Style__class_hkNpQOw3pMdDyr__,
                          LV_TEXT_ALIGN_LEFT);

  lv_style_init(&GUI_Style__class_OOrMAZkQ4fJC9M__);
  lv_style_set_text_font(&GUI_Style__class_OOrMAZkQ4fJC9M__, &label);
  lv_style_set_text_color(&GUI_Style__class_OOrMAZkQ4fJC9M__,
                          lv_color_make(0, 0, 0));
  lv_style_set_text_opa(&GUI_Style__class_OOrMAZkQ4fJC9M__, 255);
  lv_style_set_text_letter_space(&GUI_Style__class_OOrMAZkQ4fJC9M__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_OOrMAZkQ4fJC9M__, 0);
  lv_style_set_text_align(&GUI_Style__class_OOrMAZkQ4fJC9M__,
                          LV_TEXT_ALIGN_LEFT);

  lv_style_init(&GUI_Style__class_61atTRxS5uHKdD__);
  lv_style_set_text_font(&GUI_Style__class_61atTRxS5uHKdD__, &label);
  lv_style_set_text_color(&GUI_Style__class_61atTRxS5uHKdD__,
                          lv_color_make(0, 0, 0));
  lv_style_set_text_opa(&GUI_Style__class_61atTRxS5uHKdD__, 255);
  lv_style_set_text_letter_space(&GUI_Style__class_61atTRxS5uHKdD__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_61atTRxS5uHKdD__, 0);
  lv_style_set_text_align(&GUI_Style__class_61atTRxS5uHKdD__,
                          LV_TEXT_ALIGN_LEFT);

  lv_style_init(&GUI_Style__class_OTr9Zz9gnng3Yp__);
  lv_style_set_text_font(&GUI_Style__class_OTr9Zz9gnng3Yp__, &label);
  lv_style_set_text_color(&GUI_Style__class_OTr9Zz9gnng3Yp__,
                          lv_color_make(0, 0, 0));
  lv_style_set_text_opa(&GUI_Style__class_OTr9Zz9gnng3Yp__, 255);
  lv_style_set_text_letter_space(&GUI_Style__class_OTr9Zz9gnng3Yp__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_OTr9Zz9gnng3Yp__, 0);
  lv_style_set_text_align(&GUI_Style__class_OTr9Zz9gnng3Yp__,
                          LV_TEXT_ALIGN_LEFT);

  lv_style_init(&GUI_Style__class_OVQMu72rxICiln__);
  lv_style_set_text_font(&GUI_Style__class_OVQMu72rxICiln__, &orbitron_16_700);
  lv_style_set_text_color(&GUI_Style__class_OVQMu72rxICiln__,
                          lv_color_make(186, 26, 26));
  lv_style_set_text_opa(&GUI_Style__class_OVQMu72rxICiln__, 255);
  lv_style_set_text_letter_space(&GUI_Style__class_OVQMu72rxICiln__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_OVQMu72rxICiln__, 0);
  lv_style_set_text_align(&GUI_Style__class_OVQMu72rxICiln__,
                          LV_TEXT_ALIGN_LEFT);

  lv_style_init(&GUI_Style__class_PSh2DcZ53DkxCI__);
  lv_style_set_flex_flow(&GUI_Style__class_PSh2DcZ53DkxCI__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_PSh2DcZ53DkxCI__,
                               LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_track_place(&GUI_Style__class_PSh2DcZ53DkxCI__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_PSh2DcZ53DkxCI__,
                                LV_FLEX_ALIGN_END);
  lv_style_set_pad_row(&GUI_Style__class_PSh2DcZ53DkxCI__, 0);
  lv_style_set_pad_column(&GUI_Style__class_PSh2DcZ53DkxCI__, 16);
  lv_style_set_layout(&GUI_Style__class_PSh2DcZ53DkxCI__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_ZaJfoY0Yibal83__);
  lv_style_set_text_font(&GUI_Style__class_ZaJfoY0Yibal83__, &roboto_22_400);
  lv_style_set_text_color(&GUI_Style__class_ZaJfoY0Yibal83__,
                          lv_color_make(0, 0, 0));
  lv_style_set_text_opa(&GUI_Style__class_ZaJfoY0Yibal83__, 255);
  lv_style_set_text_letter_space(&GUI_Style__class_ZaJfoY0Yibal83__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_ZaJfoY0Yibal83__, 0);
  lv_style_set_text_align(&GUI_Style__class_ZaJfoY0Yibal83__,
                          LV_TEXT_ALIGN_LEFT);

  lv_style_init(&GUI_Style__class_dV0lMwg70AyM1Z__);
  lv_style_set_text_font(&GUI_Style__class_dV0lMwg70AyM1Z__, &orbitron_32);
  lv_style_set_text_color(&GUI_Style__class_dV0lMwg70AyM1Z__,
                          lv_color_make(0, 0, 0));
  lv_style_set_text_opa(&GUI_Style__class_dV0lMwg70AyM1Z__, 255);
  lv_style_set_text_letter_space(&GUI_Style__class_dV0lMwg70AyM1Z__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_dV0lMwg70AyM1Z__, 0);
  lv_style_set_text_align(&GUI_Style__class_dV0lMwg70AyM1Z__,
                          LV_TEXT_ALIGN_LEFT);
}

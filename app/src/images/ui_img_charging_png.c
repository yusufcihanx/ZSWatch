// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.2.0
// Project name: SquareLine_Project

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif
#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets/charging.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_charging_png_data[] = {
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0xA0,0x00,0x00,0xFA,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFA,0x00,0x00,0xA0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x01,0x00,0x00,0x47,0x00,0x00,0xFF,0x00,0x00,0xF3,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xF3,0x00,0x00,0xFF,0x00,0x00,0x47,0x00,0x00,0x01,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x06,0x00,0x00,0x85,0x00,0x00,0xF0,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0x96,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x96,0x00,0x00,0xFF,0x00,0x00,0xFF,
    0x00,0x00,0xF0,0x00,0x00,0x85,0x00,0x00,0x06,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x95,0x00,0x00,0xFF,0x00,0x00,0xFE,0x00,0x00,0xCA,0x00,0x00,0xB9,0x00,0x00,0x36,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x36,0x00,0x00,0xB9,0x00,0x00,0xCA,0x00,0x00,0xFE,0x00,0x00,0xFF,0x00,0x00,0x95,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x18,0x00,0x00,0xFE,0x00,0x00,0xF7,0x00,0x00,0x2B,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x2B,0x00,0x00,0xF7,0x00,0x00,0xFE,0x00,0x00,0x18,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x46,0x00,0x00,0xFF,0x00,0x00,0xA5,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0xA5,0x00,0x00,0xFF,0x00,0x00,0x46,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0x00,0x00,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0x00,0x00,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x02,0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00,0x07,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0x00,0x00,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x63,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xDB,0x00,0x00,0x08,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0x00,0x00,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x0D,0x00,0x00,0xE7,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0x44,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0x00,0x00,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x86,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xD9,0x00,0x00,0x60,0x00,0x00,0x5A,0x00,0x00,0x08,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0x00,0x00,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0x00,0x00,0x1A,0x00,0x00,0xF7,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0x45,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0x00,0x00,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,
    0x00,0x00,0x23,0x00,0x00,0xF3,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0x97,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0x00,0x00,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x0F,0x00,0x00,0x20,0x00,0x00,0xB3,0x00,0x00,0xFF,0x00,0x00,0xB3,0x00,0x00,0x03,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0x00,0x00,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x0A,0x00,0x00,0xF3,0x00,0x00,0xCB,0x00,0x00,0x0B,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x82,0x00,0x00,0xFF,0x00,0x00,0x42,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x5B,0x00,0x00,0xDF,0x00,0x00,0x17,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x13,0x00,0x00,0x56,0x00,0x00,0x03,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x8D,0x00,0x00,0x28,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x2A,0x00,0x00,0x92,0x00,0x00,0x0C,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x42,0x00,0x00,0xFF,0x00,0x00,0xAE,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0xAB,0x00,0x00,0xFF,0x00,0x00,0x3E,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x12,0x00,0x00,0xFB,0x00,0x00,0xFB,0x00,0x00,0x4A,
    0x00,0x00,0x01,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x01,0x00,0x00,0x4A,0x00,0x00,0xFB,0x00,0x00,0xFB,0x00,0x00,0x12,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x7E,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xE9,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE9,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0x7E,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x65,0x00,0x00,0xD2,0x00,0x00,0xFB,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFB,0x00,0x00,0xD2,0x00,0x00,0x65,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    
};
const lv_img_dsc_t ui_img_charging_png = {
    .header.always_zero = 0,
    .header.w = 24,
    .header.h = 24,
    .data_size = sizeof(ui_img_charging_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = ui_img_charging_png_data
};


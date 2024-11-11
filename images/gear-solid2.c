
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_GEAR_SOLID2
#define LV_ATTRIBUTE_GEAR_SOLID2
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_GEAR_SOLID2
uint8_t gear_solid2_map[] = {

    0x4c,0x70,0x47,0x00,0xaa,0x55,0x55,0x03,0x9f,0x69,0x41,0xd5,0xa0,0x69,0x41,0xd3,
    0x80,0x80,0x80,0x02,0x9f,0x69,0x41,0xc4,0xa1,0x6b,0x43,0x13,0x9f,0x69,0x41,0xfc,
    0x92,0x6d,0x49,0x07,0xa0,0x69,0x41,0xfb,0x99,0x66,0x44,0x0f,0x9e,0x69,0x40,0x5f,
    0x9f,0x69,0x41,0xc5,0x9f,0x69,0x41,0xd4,0x9f,0x60,0x40,0x08,0xa0,0x69,0x41,0x66,
    0xa0,0x69,0x40,0x6b,0x9e,0x6a,0x40,0x54,0x9e,0x68,0x42,0x69,0xa0,0x68,0x41,0x8e,
    0x9f,0x69,0x41,0xe4,0x9f,0x69,0x41,0xee,0xa0,0x68,0x41,0xa6,0xa0,0x68,0x42,0xab,
    0x9f,0x69,0x41,0xbd,0x9f,0x69,0x41,0xc7,0x9f,0x69,0x41,0xa8,0x9f,0x6a,0x41,0x98,
    0xa0,0x6a,0x41,0x5e,0xa2,0x74,0x46,0x0b,0x9e,0x69,0x42,0x61,0xa1,0x68,0x42,0x1b,
    0x99,0x66,0x40,0x14,0xa1,0x69,0x42,0x49,0x9f,0x6a,0x40,0x60,0x9f,0x66,0x40,0x28,
    0xa0,0x69,0x41,0xeb,0x9f,0x69,0x41,0xef,0x9f,0x69,0x41,0xd0,0x9f,0x69,0x41,0xfe,
    0x9f,0x69,0x41,0xdf,0x9f,0x69,0x41,0xc0,0x9f,0x69,0x41,0xe9,0x9f,0x69,0x41,0xf8,
    0x9f,0x69,0x41,0xfd,0x9f,0x69,0x41,0xbf,0x9f,0x6a,0x41,0xa4,0x9f,0x69,0x41,0xec,
    0x9f,0x69,0x41,0xfa,0xa0,0x69,0x42,0xa3,0xa5,0x69,0x3c,0x11,0x95,0x6a,0x40,0x0c,
    0x9f,0x69,0x42,0x6d,0xff,0x00,0x00,0x01,0xa2,0x6c,0x3e,0x21,0x9f,0x6a,0x41,0x6a,
    0x9f,0x6a,0x40,0x6f,0xa0,0x66,0x42,0x23,0x80,0x80,0x40,0x04,0x9f,0x69,0x41,0xe5,
    0x9f,0x69,0x42,0x88,0x9e,0x6a,0x42,0x8c,0xa0,0x6a,0x40,0x93,0x9f,0x69,0x40,0x97,
    0x9f,0x69,0x42,0xda,0x9f,0x69,0x41,0x9c,0x9f,0x6a,0x40,0xba,0xa0,0x69,0x41,0xbb,
    0x9f,0x69,0x41,0xa0,0x9e,0x69,0x40,0xbe,0x9f,0x69,0x41,0xa5,0x9e,0x6a,0x41,0xa9,
    0x9f,0x69,0x41,0xed,0xa0,0x69,0x41,0xf3,0x9f,0x69,0x41,0xf2,0x9f,0x69,0x41,0xf7,
    0x9f,0x69,0x41,0xb9,0x9f,0x6a,0x42,0x80,0x9e,0x69,0x41,0x99,0xa0,0x68,0x41,0xe3,
    0x9f,0x69,0x41,0xe7,0x9f,0x69,0x41,0xf1,0x9f,0x68,0x42,0xd2,0x9e,0x69,0x42,0xd6,
    0xa0,0x69,0x42,0xb3,0x9f,0x69,0x41,0xd1,0x9f,0x69,0x41,0xf5,0x9f,0x69,0x41,0xb7,
    0x9f,0x6a,0x41,0x9d,0x9e,0x69,0x40,0xb6,0xa0,0x69,0x41,0x9e,0x9f,0x69,0x41,0x72,
    0xa1,0x6b,0x43,0x26,0xa0,0x68,0x40,0x73,0x9f,0x69,0x40,0x77,0x9e,0x69,0x40,0x5c,
    0x9f,0x68,0x42,0x5d,0x9f,0x68,0x41,0x62,0x99,0x66,0x4d,0x0a,0x9f,0x69,0x40,0x38,
    0x9c,0x63,0x47,0x12,0x9e,0x69,0x44,0x22,0x9f,0x69,0x41,0x75,0xa1,0x69,0x43,0x2e,
    0x9d,0x6c,0x45,0x1a,0x9e,0x6a,0x42,0x3a,0x9f,0x69,0x41,0x5a,0xa0,0x6a,0x42,0x46,
    0xaa,0x55,0x55,0x06,0x9f,0x68,0x41,0xc1,0x9f,0x69,0x41,0xea,0x9f,0x69,0x41,0x8d,
    0x9e,0x6a,0x41,0x91,0x9f,0x69,0x41,0xf9,0x9f,0x6a,0x41,0x82,0xa0,0x69,0x40,0x83,
    0x9f,0x69,0x41,0xcf,0x9f,0x6a,0x41,0xb5,0x9e,0x69,0x42,0xce,0x9f,0x68,0x41,0xb0,
    0x9f,0x69,0x41,0xd9,0x9f,0x69,0x41,0xde,0x9f,0x6a,0x41,0xe8,0x9f,0x69,0x41,0xaa,
    0x9e,0x6a,0x40,0xae,0xa0,0x69,0x41,0x96,0x9f,0x69,0x41,0xd8,0x9f,0x68,0x42,0x90,
    0x9f,0x69,0x41,0xdd,0x9f,0x68,0x41,0x95,0x9f,0x69,0x41,0xe2,0xa0,0x69,0x41,0x86,
    0x9f,0x68,0x42,0x9f,0x9f,0x69,0x41,0xc8,0xa0,0x69,0x40,0x8b,0x9f,0x6a,0x41,0xd7,
    0x9f,0x69,0x41,0x94,0x9f,0x69,0x41,0xb8,0x9f,0x69,0x41,0xdc,0xa0,0x69,0x41,0xc3,
    0x9f,0x69,0x41,0xe1,0x9e,0x6a,0x40,0xc6,0x9f,0x69,0x41,0xe6,0x9f,0x69,0x41,0xf0,
    0x9f,0x69,0x40,0xb2,0x9e,0x69,0x41,0xb1,0x9f,0x69,0x41,0xe0,0x9f,0x68,0x41,0xbc,
    0x9e,0x6d,0x3d,0x15,0x9f,0x68,0x40,0x40,0x9f,0x70,0x40,0x10,0xa0,0x69,0x41,0x4b,
    0x9d,0x67,0x40,0x34,0x9f,0x67,0x41,0x4a,0xa0,0x69,0x41,0x7e,0x9e,0x67,0x43,0x2a,
    0xa0,0x6b,0x41,0x2b,0x9f,0x68,0x40,0x20,0xa2,0x66,0x44,0x1e,0x9e,0x6a,0x41,0x71,
    0x9e,0x68,0x40,0x67,0xa0,0x68,0x41,0x6e,0xa1,0x68,0x3e,0x31,0x9f,0x67,0x3e,0x25,
    0x9e,0x6a,0x40,0x57,0xa1,0x68,0x42,0x36,0x9d,0x6a,0x40,0x3c,0x9f,0x68,0x40,0x58,
    0xa4,0x6d,0x49,0x0e,0x9e,0x68,0x42,0x42,0xa0,0x6b,0x42,0x3e,0x9d,0x69,0x41,0x27,
    0x9f,0x6c,0x3e,0x2d,0x9e,0x6a,0x3e,0x1d,0xa0,0x6a,0x41,0x76,0x9f,0x69,0x42,0x70,
    0x9e,0x6a,0x42,0x74,0x9d,0x62,0x3b,0x0d,0x9c,0x6a,0x40,0x24,0x9f,0x69,0x40,0x50,
    0xa0,0x68,0x41,0x56,0xa0,0x68,0x40,0x5b,0x9f,0x69,0x41,0xff,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,

    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa3,0x9f,0x81,0x59,0x53,0x14,0x15,0x07,0x07,0x15,0x3b,0x53,0x89,0x1b,0x66,0x23,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0x09,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x07,0x34,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9b,0x07,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x07,0x9c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x72,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x51,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x4a,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x67,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x67,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x58,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x58,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0x2c,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x27,0x32,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6b,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x6b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa5,0x8b,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x0c,0x69,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x12,0x1a,0x41,0x1c,0x32,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x69,0x57,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x43,0xaa,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x61,0x44,0x17,0x10,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x18,0xb6,0xb6,0xb6,0xb6,0x30,0x43,0x12,0x68,0x00,0x00,0x00,0x00,0x00,0x06,0x46,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x47,0x94,0x00,0x00,0x00,0x00,0x00,0xad,0xa1,0x45,0x07,0xb6,0xb6,0xb6,0xb6,0x29,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x02,0x4d,0x23,0x00,0x99,0x14,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x2a,0x11,0x00,0x65,0x38,0x05,0x27,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x1b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6a,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x28,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x4f,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x5f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x68,0x25,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x51,0x9e,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x77,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x59,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xa7,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x6a,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x62,0x4f,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x14,0x1d,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xb0,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x66,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x1d,0x2a,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x24,0xb1,0x00,0x00,0x00,
    0x00,0x00,0x00,0x5b,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x5d,0x00,0x00,0x00,
    0x00,0x00,0x35,0x40,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x8a,0x04,0x00,0x00,
    0x00,0x00,0x21,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x21,0x00,0x00,
    0x00,0x00,0x4e,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x3e,0x00,0x00,
    0x00,0x00,0x47,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x09,0x0c,0x2e,0x13,0x13,0x2e,0x8d,0x09,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x31,0x00,0x00,
    0x00,0x00,0x10,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x26,0x1c,0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x1c,0x55,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x0f,0x00,0x00,
    0x00,0x00,0x0e,0x19,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x24,0x60,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x0b,0x2f,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x05,0x08,0x00,0x00,
    0x00,0x00,0x00,0x33,0x42,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x03,0x36,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x65,0x03,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x2d,0x0a,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x0e,0x7c,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x03,0xa8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0x0d,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x17,0x08,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x01,0x1b,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x2f,0x39,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9d,0x6e,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x5a,0x3a,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x5f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0b,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x2c,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x55,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x76,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x07,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa4,0x71,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x2b,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x09,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x09,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x2d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0d,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x19,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x26,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x2e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x16,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x82,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4b,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x86,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3d,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4b,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x3d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6f,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x4a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8e,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1a,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x8c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x19,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x26,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x07,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x09,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x45,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x2b,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x0b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1e,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x2b,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1e,0x09,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x52,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x07,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x0b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x61,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x01,0x7d,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x48,0xb2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x24,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x5a,0x3a,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x08,0x17,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x0d,0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0x02,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x17,0x08,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x33,0x4c,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x78,0xab,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x39,0x0d,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x2d,0x0a,0x00,0x00,0x00,
    0x00,0x00,0x08,0x05,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x2f,0x0b,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x1e,0x48,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x05,0x08,0x00,0x00,
    0x00,0x00,0x37,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x52,0x22,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x22,0x03,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xa0,0x00,0x00,
    0x00,0x00,0x1a,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x07,0x19,0x16,0x13,0x13,0x16,0x85,0x07,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x31,0x00,0x00,
    0x00,0x00,0x1b,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x70,0x00,0x00,
    0x00,0x00,0x21,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xa9,0x00,0x00,
    0x00,0x00,0x35,0x40,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x87,0x35,0x00,0x00,
    0x00,0x00,0x00,0x5d,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x34,0x00,0x00,0x00,
    0x00,0x00,0x00,0x1d,0x2a,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x50,0x62,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xae,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x38,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1d,0x14,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x92,0x0e,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xb5,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x11,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x91,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x90,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x25,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x8f,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x28,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x28,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4e,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x02,0x4d,0x23,0x00,0x97,0x3b,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x7a,0xb3,0x00,0x36,0x38,0x05,0x2c,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x29,0xb6,0xb6,0xb6,0xb6,0x07,0x18,0x10,0x1f,0x00,0x00,0x00,0x00,0x00,0x20,0x1a,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x31,0x32,0x00,0x00,0x00,0x00,0x00,0x1f,0x10,0x93,0x09,0xb6,0xb6,0xb6,0xb6,0x42,0x6c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x37,0x7b,0x84,0x1e,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa6,0x4c,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x75,0x63,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x64,0x0b,0x41,0x16,0x0f,0x6c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x63,0x0c,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x6d,0x98,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x95,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x96,0x27,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x07,0x33,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7e,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x74,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x12,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa2,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x23,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x49,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x25,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x29,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x57,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x9a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xac,0x07,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x30,0x5c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0x09,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0xb6,0x30,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5c,0x5b,0x88,0x54,0x0d,0x79,0x15,0x56,0x56,0x15,0x80,0x03,0x54,0x3e,0xaf,0x39,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t gear_solid2 = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_I8,
  .header.flags = 0,
  .header.w = 80,
  .header.h = 80,
  .header.stride = 80,
  .data_size = sizeof(gear_solid2_map),
  .data = gear_solid2_map,
};


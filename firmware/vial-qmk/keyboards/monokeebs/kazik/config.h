// Copyright 2023 Tomasz Dobrowolski (@monokuroumu)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define FORCE_NKRO

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.

/* RGB pin is GP1. */
#define RGB_DI_PIN GP1
#ifdef RGB_DI_PIN
  #define RGBLED_NUM 25
  #define RGBLIGHT_HUE_STEP 2
  #define RGBLIGHT_SAT_STEP 5
  #define RGBLIGHT_VAL_STEP 5
  #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
  #define RGBLIGHT_EFFECT_BREATHING
  #define RGBLIGHT_EFFECT_RAINBOW_MOOD
  #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
  #define RGBLIGHT_EFFECT_SNAKE
  #define RGBLIGHT_EFFECT_KNIGHT
  #define RGBLIGHT_EFFECT_CHRISTMAS
  #define RGBLIGHT_EFFECT_STATIC_GRADIENT
  #define RGBLIGHT_EFFECT_RGB_TEST
  #define RGBLIGHT_EFFECT_ALTERNATING
  #define RGBLIGHT_EFFECT_TWINKLE
#endif
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_kazik(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, \
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L, \
        LSFT(KC_Z),   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_DOT, KC_RSFT, \
	KC_LGUI,   KC_LCTL,   KC_LALT,   KC_SPC, KC_TAB,KC_BSPC, RALT(KC_COMM), RCTL(KC_SLASH), KC_RGUI
    ),

    [1] = LAYOUT_kazik(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, \
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L, \
        LSFT(KC_Z),   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_DOT, KC_RSFT, \
	KC_LGUI,   KC_LCTL,   KC_LALT,   KC_SPC, KC_TAB,KC_BSPC, RALT(KC_COMM), RCTL(KC_SLASH), KC_RGUI
    ),

    [2] LAYOUT_kazik(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, \
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L, \
        LSFT(KC_Z),   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_DOT, KC_RSFT, \
	KC_LGUI,   KC_LCTL,   KC_LALT,   KC_SPC, KC_TAB,KC_BSPC, RALT(KC_COMM), RCTL(KC_SLASH), KC_RGUI
    ),

    [3] LAYOUT_kazik(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, \
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L, \
        LSFT(KC_Z),   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_DOT, KC_RSFT, \
	KC_LGUI,   KC_LCTL,   KC_LALT,   KC_SPC, KC_TAB,KC_BSPC, RALT(KC_COMM), RCTL(KC_SLASH), KC_RGUI
    ),

};

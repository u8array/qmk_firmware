#include QMK_KEYBOARD_H
#include "keymap_us_international.h"

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                           KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                           KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS,
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,                          KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LBRC,     KC_RBRC, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LALT, KC_LGUI, MO(1), KC_SPC,                                        KC_ENT, MO(2), KC_BSPC, KC_RGUI
        ),

	[1] = LAYOUT(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                               KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        US_EURO, US_DEG, US_ADIA, US_ODIA, US_UDIA, US_SS,                      US_ARNG, US_AE, US_OSTR, KC_LPRN, KC_RPRN, KC_PIPE,
        KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LBRC, KC_RBRC, KC_TILD,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LPRN,  KC_RPRN, KC_EQL, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                         KC_TRNS, MO(3), KC_DEL, KC_TRNS
        ),

	[2] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_NUM, KC_PPLS, KC_PMNS, KC_PAST, KC_PSLS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_PDOT, KC_P7, KC_P8, KC_P9, KC_PCMM, KC_TRNS,
        KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,                   KC_PEQL, KC_P4, KC_P5, KC_P6, KC_P0, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_BSLS, KC_TRNS,
        KC_TRNS, KC_TRNS, MO(3), KC_TRNS,                                           KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS
        ),

	[3] = LAYOUT(
        KC_NO, KC_PSCR, KC_SCRL, KC_PAUS, KC_MFFD, KC_MPLY,                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_INS, KC_PGUP, KC_HOME, KC_MNXT, KC_VOLU,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_DEL, KC_PGDN, KC_END, KC_MPRV, KC_VOLD,                       KC_NO, KC_NO, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_MSTP, KC_MUTE,          KC_CAPS, KC_NO, KC_NO, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
        )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

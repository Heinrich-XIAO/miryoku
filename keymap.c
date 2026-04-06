// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _CVM,
    _BASE,
    _NUM,
    _SYM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_CVM] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, TG(_BASE), KC_NO,
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T,         KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
        KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G,         KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B,         KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,
                                KC_NO, KC_C, KC_V,       KC_N, KC_M, KC_NO
    ),
    [_BASE] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, TG(_CVM), KC_NO,
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T,         KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
        KC_NO, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,
                                                        KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_SCLN), KC_QUOT,
        KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B,         KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,
                                KC_ESC, KC_SPC, KC_TAB,       LT(_SYM, KC_ENT), LT(_NUM, KC_BSPC), KC_DEL
    ),
    [_NUM] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO,
                                KC_NO, KC_0, KC_NO,       KC_NO, KC_BSPC, KC_NO
    ),
    [_SYM] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_SCLN, KC_QUOT, KC_MINS, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_LBRC, KC_RBRC, KC_BSLS, KC_NO, KC_NO,
                                KC_NO, KC_EQL, KC_NO,       KC_NO, KC_ENT, KC_NO
    )
};

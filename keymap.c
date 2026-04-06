// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _CVM,
    _BASE,
    _NUM,
    _SYM,
    _FUN,
    _MOUSE,
    _NAV,
    _MEDIA
};

// Clipboard keys (from manna-harbour_miryoku.h)
#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_CVM] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, TG(_BASE), KC_NO,
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T,         KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
        KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G,         KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B,         KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,
                                KC_NO, KC_C, KC_V,       KC_N, KC_M, KC_NO
    ),

    // Standard Miryoku QWERTY Base Layer
    [_BASE] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, TG(_CVM), KC_NO,
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T,         KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO,
        KC_NO, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,
                                                        KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_QUOT), KC_NO,
        KC_NO, LT(_CVM, KC_Z), ALGR_T(KC_X), KC_C, KC_V, KC_B,         KC_N, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(_CVM, KC_SLSH), KC_NO,
                                LT(_MEDIA, KC_ESC), LT(_NAV, KC_SPC), LT(_MOUSE, KC_TAB),       LT(_SYM, KC_ENT), LT(_NUM, KC_BSPC), LT(_FUN, KC_DEL)
    ),

    // Standard Miryoku NUM Layer (numpad on left hand)
    [_NUM] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_SCLN, KC_4, KC_5, KC_6, KC_EQL,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                KC_NO, KC_DOT, KC_0,       KC_NO, KC_MINS, KC_NO
    ),

    // Standard Miryoku SYM Layer (symbols on left hand)
    [_SYM] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                KC_NO, KC_RPRN, KC_UNDS,       KC_NO, KC_NO, KC_NO
    ),

    // Standard Miryoku FUN Layer (function keys on left hand)
    [_FUN] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                KC_NO, KC_APP, KC_SPC,       KC_NO, KC_TAB, KC_NO
    ),

    // Standard Miryoku MOUSE Layer - VI MODE (mouse on right hand with h/j/k/l)
    [_MOUSE] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     U_UND, U_CUT, U_CPY, U_PST, U_RDO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, MS_LEFT, MS_DOWN, MS_UP, MS_RGHT, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, KC_NO,
                                KC_NO, MS_BTN3, MS_BTN2,       MS_BTN1, KC_NO, KC_NO
    ),

    // Standard Miryoku NAV Layer - VI MODE (navigation on right hand with h/j/k/l)
    [_NAV] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     U_UND, U_CUT, U_CPY, U_PST, U_RDO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, CW_TOGG, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_INS, KC_NO,
                                KC_NO, KC_ENT, KC_BSPC,       KC_DEL, KC_NO, KC_NO
    ),

    // Standard Miryoku MEDIA Layer (media keys on left hand) - No RGB support
    [_MEDIA] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                KC_NO, KC_MUTE, KC_MPLY,       KC_MSTP, KC_NO, KC_NO
    )
};

#include QMK_KEYBOARD_H
//#include "./quantum/quantum.h"

#define XXXX KC_NO
#define XXXXXX KC_NO

#define ____ KC_TRNS
#define ______ KC_TRNS

#define FLOW LCTL(LALT(KC_SPACE))

#define LAYOUT LAYOUT_split_3x5_3

enum custom_layer {
    _MAIN,      // 0
    _NUMSYM,    // 1
    _NAVMEDIA,  // 2
    _FUNCS,     // 3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_MAIN] = LAYOUT(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, LCTL_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, RCTL_T(KC_SLSH), LT(2,FLOW), LALT_T(KC_ESC), KC_BSPC, LT(1,KC_SPC), KC_LSFT, LT(3,KC_ENT)),
	[_NUMSYS] = LAYOUT(KC_ESC, KC_GRV, KC_UNDS, KC_TILD, KC_PLUS, KC_TAB, KC_7, KC_8, KC_9, KC_BSLS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_MINS, KC_DOT, KC_4, KC_5, KC_6, KC_SCLN, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_EQL, KC_ENT, KC_1, KC_2, KC_3, KC_0, KC_NO, KC_DEL, KC_BSPC, KC_TRNS, KC_NO, KC_NO),
	[_NAVMEDIA] = LAYOUT(KC_PGUP, KC_HOME, KC_UP, KC_END, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLD, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),
	[_FUNCS] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_F7, KC_F8, KC_F9, KC_F12, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_INS, KC_F4, KC_F5, KC_F6, KC_F11, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CAPS, KC_F1, KC_F2, KC_F3, KC_F10, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS)
};

  //,--------------------------------------------.                    ,--------------------------------------------.

  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|

  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|

  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|

                    //`--------------------------'                    `--------------------------'

/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define XXXX  KC_NO
#define XXXXX KC_NO

#define ____   KC_TRNS
#define _____  KC_TRNS
#define PUSHED KC_TRNS

#define QUOT KC_QUOT
#define COMM KC_COMM

#define WN_PD LWIN_T(KC_DOT)
#define WIN_X LWIN_T(KC_X)

#define CTL_Z LCTL_T(KC_Z)
#define CT_SL RCTL_T(KC_SLSH)

#define FLOW LCTL(LALT(KC_SPACE))

#define ALT_ESC LALT_T(KC_ESC)

#define ONE_SPC LT(1,KC_SPC)
#define TWO_BSP LT(2,KC_BSPC)
#define THR_ENT LT(3,KC_ENT)

enum custom_layer {
    _MAIN,      // 0
    _NUMSYM,    // 1
    _NAVMEDIA,  // 2
    _FUNCS,     // 3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_MAIN] = LAYOUT(
    //┏--------┳--------┳--------┳--------┳--------┓                    ┏--------┳--------┳--------┳--------┳--------┓
         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    //┣--------╋--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------╋--------┫
         KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,    QUOT,
    //┣--------╋--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------╋--------┫
        CTL_Z,   WIN_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,    COMM,   WN_PD,   CT_SL,
    //┗--------┻--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------┻--------┛
                           FLOW,  ALT_ESC, TWO_BSP,                      ONE_SPC, KC_LSFT, THR_ENT
                    //  ┗--------┻--------┻--------┛                    ┗--------┻--------┻--------┛


    ),

	[_NUMSYM] = LAYOUT(
    //┏--------┳--------┳--------┳--------┳--------┓                    ┏--------┳--------┳--------┳--------┳--------┓
       KC_ESC,  KC_GRV,  KC_UNDS, KC_TILD, KC_PLUS,                       KC_TAB,   KC_7,    KC_8,    KC_9,  KC_BSLS,
    //┣--------╋--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------╋--------┫
       KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_MINS,                       KC_DOT,   KC_4,    KC_5,    KC_6,  KC_SCLN,
    //┣--------╋--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------╋--------┫
       KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_EQL,                        KC_ENT,   KC_1,    KC_2,    KC_3,    KC_0,
    //┗--------┻--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------┻--------┛
                          XXXXX,   KC_DEL, KC_BSPC,                       PUSHED,  XXXXX,   XXXXX
                    //  ┗--------┻--------┻--------┛                    ┗--------┻--------┻--------┛
    ),

	[_NAVMEDIA] = LAYOUT(
    //┏--------┳--------┳--------┳--------┳--------┓                    ┏--------┳--------┳--------┳--------┳--------┓
        KC_PGUP, KC_HOME, KC_UP,   KC_END, KC_VOLU,                       XXXXX,   XXXXX,   XXXXX,   XXXXX,   XXXXX,
    //┣--------╋--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------╋--------┫
       KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLD,                       XXXXX,  KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    //┣--------╋--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------╋--------┫
        XXXXX,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,                       XXXXX,   XXXXX,   XXXXX,   XXXXX,   XXXXX,
    //┗--------┻--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------┻--------┛
                          XXXXX,   XXXXX,   PUSHED,                       XXXXX,   XXXXX,   XXXXX
                    //  ┗--------┻--------┻--------┛                    ┗--------┻--------┻--------┛
    ),

	[_FUNCS] = LAYOUT(
    //┏--------┳--------┳--------┳--------┳--------┓                    ┏--------┳--------┳--------┳--------┳--------┓
        XXXXX,   XXXXX,   XXXXX,   XXXXX,   XXXXX,                       KC_PSCR,  KC_F7,   KC_F8,   KC_F9,   KC_F12,
    //┣--------╋--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------╋--------┫
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXX,                        KC_INS,  KC_F4,   KC_F5,   KC_F6,   KC_F11,
    //┣--------╋--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------╋--------┫
        XXXXX,   XXXXX,   XXXXX,   XXXXX,   XXXXX,                       KC_CAPS,  KC_F1,   KC_F2,   KC_F3,   KC_F10,
    //┗--------┻--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------┻--------┛
                          XXXXX,   XXXXX,   XXXXX,                        XXXXX,   XXXXX,   PUSHED
                    //  ┗--------┻--------┻--------┛                    ┗--------┻--------┻--------┛
    )

};

    //┏--------┳--------┳--------┳--------┳--------┓                    ┏--------┳--------┳--------┳--------┳--------┓

    //┣--------╋--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------╋--------┫

    //┣--------╋--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------╋--------┫

    //┗--------┻--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------┻--------┛

                    //  ┗--------┻--------┻--------┛                    ┗--------┻--------┻--------┛
// ┏┳┓
// ┣╋┫
// ┗┻┛

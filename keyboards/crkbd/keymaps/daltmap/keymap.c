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
#include "quantum.h"

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
       KC_ESC,  KC_GRV,  KC_TILD, KC_UNDS, KC_PLUS,                       KC_TAB,   KC_7,    KC_8,    KC_9,  KC_BSLS,
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
        KC_PGUP, KC_HOME, KC_UP,   KC_END, KC_VOLU,                      KC_TAB,   XXXXX,   XXXXX,   XXXXX,   XXXXX,
    //┣--------╋--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------╋--------┫
       KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLD,                       XXXXX,  KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    //┣--------╋--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------╋--------┫
        XXXXX,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,                       XXXXX,   XXXXX,   XXXXX,   XXXXX,   XXXXX,
    //┗--------┻--------╋--------╋--------╋--------┫                    ┣--------╋--------╋--------╋--------┻--------┛
                          XXXXX,   XXXXX,   PUSHED,                      KC_SPC,   XXXXX,   XXXXX
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

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

// static void oled_render_layer_state(void) {
//     oled_write_P(PSTR("Layer: "), false);
//     switch (get_highest_layer(layer_state)) {
//         case 0:
//             oled_write_ln_P(PSTR("Default"), false);
//             break;
//         case 1:
//             oled_write_ln_P(PSTR("Num / Sym"), false);
//             break;
//         case 2:
//             oled_write_ln_P(PSTR("Nav / Media"), false);
//             break;
//         case 3:
//             oled_write_ln_P(PSTR("Funcs"), false);
//             break;
//         default:
//             oled_write_ln_P(PSTR("Undefined"), false);
//             break;
//     }
// }


__attribute__((weak)) void oled_render_shrug(void) {
    // clang-format off
    static const char PROGMEM shrug_logo[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x80, 0x80, 0xC0, 0xC0, 0xC0,
    0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x30, 0x78, 0x38, 0x3C,
    0x3C, 0x1C, 0x1E, 0x1E, 0x0E, 0x0F,
    0x0F, 0x07, 0x07, 0x07, 0x03, 0x03,
    0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE,
    0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xC0, 0xE0, 0xF0, 0xF8,
    0x78, 0x3C, 0x1C, 0x1E, 0x1E, 0x1E,
    0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1C,
    0x3C, 0x3C, 0x78, 0xF0, 0xF0, 0xC0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xC1,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x18, 0xFC, 0xFC, 0xF0,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x06, 0x07, 0x87, 0xC3, 0xC3, 0xE1,
    0xE1, 0x70, 0x78, 0x30, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x07, 0x0F, 0x1E, 0x3C, 0x78,
    0x70, 0xF0, 0xE0, 0xE0, 0xE1, 0xC1,
    0xC1, 0xC0, 0xC0, 0x80, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0,
    0xC0, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x01, 0x01, 0x01, 0x03, 0xC3,
    0xC3, 0xC0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x03, 0x07, 0x0F, 0x1F, 0x1E,
    0x1C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C,
    0x3C, 0x3C, 0x3C, 0x1C, 0x1E, 0x1E,
    0x0F, 0x0F, 0x07, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F,
    0x3F, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x06, 0x0F, 0x0E, 0x1E, 0x1E, 0x1C,
    0x3C, 0x38, 0x38, 0x78, 0x70, 0x70,
    0xF0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0,
    0xC0, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x83, 0x83, 0x83, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00,
};

    // clang-format on
    oled_write_raw_P(shrug_logo, sizeof(shrug_logo));
}

__attribute__((weak)) void oled_render_test(void) {
    // clang-format off
    static const char PROGMEM font[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
    0xC0, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
    0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
    0xCC, 0xCC, 0xCC, 0xC0, 0xC0, 0xC0,
    0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF3,
    0xF3, 0xC3, 0xC3, 0xC3, 0xC3, 0x33,
    0x33, 0x33, 0x33, 0x33, 0x33, 0xF3,
    0xF3, 0x03, 0x03, 0x03, 0x03, 0x33,
    0x33, 0x33, 0x33, 0xF3, 0xF3, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xFF, 0xFF, 0x0F, 0x0F, 0x30,
    0x30, 0xFF, 0xFF, 0xC0, 0xC0, 0xFF,
    0xFF, 0xF0, 0xF0, 0xC3, 0xC3, 0xC0,
    0xC0, 0x30, 0x30, 0xFF, 0xFF, 0xFC,
    0xFC, 0xF3, 0xF3, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x3F, 0x3F, 0xFF,
    0xFF, 0xFC, 0xFC, 0x30, 0x30, 0xCF,
    0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0xFF,
    0xFF, 0xC3, 0xC3, 0xC0, 0xC0, 0x30,
    0x30, 0x30, 0x30, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x03, 0x03, 0xFC, 0xFC, 0xFF,
    0xFF, 0x0F, 0x0F, 0xF0, 0xF0, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0x03, 0x03, 0xF0, 0xF0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3C,
    0x3C, 0x3C, 0x3C, 0x0C, 0x0C, 0xF3,
    0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
    0x00, 0x3C, 0x3C, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xF0, 0xF0, 0xCC, 0xCC, 0x3F,
    0x3F, 0x3F, 0x3F, 0x0F, 0x0F, 0x00,
    0x00, 0x3C, 0x3C, 0x3F, 0x3F, 0xCC,
    0xCC, 0xC0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x83, 0xC3, 0xE3, 0xE0,
    0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x83,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x03,
    0x87, 0x67, 0xFF, 0xF7, 0xFB, 0xF9,
    0xFD, 0xFD, 0x38, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
    0x40, 0x90, 0x08, 0x00, 0xFC, 0x01,
    0xA5, 0x01, 0xF1, 0x18, 0x40, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x40, 0x60,
    0x20, 0x05, 0x15, 0x02, 0x00, 0x00,
    0x3F, 0x0A, 0x17, 0x0A, 0x3F, 0x00,
    0x03, 0x03, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x80, 0x00, 0x00, 0x80, 0x80,
    0xF8, 0xF8, 0xFE, 0xFE, 0xFF, 0xFF,
    0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF,
    0xFE, 0xFE, 0xF8, 0xF8, 0x80, 0x80,
    0x00, 0x00, 0x80, 0x80, 0x00, 0x00,
    0x1E, 0x1E, 0x7F, 0x7F, 0xFE, 0xFE,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFE, 0xFE, 0x7F, 0x7F,
    0x1E, 0x1E, 0xF0, 0xF0, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xF0, 0xF0, 0x0F, 0x0F,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x03,
    0x0F, 0x0F, 0x3F, 0x3F, 0x3F, 0x3F,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x3F,
    0x0F, 0x0F, 0x03, 0x03, 0x00, 0x00,
    0x00, 0x00,
};



    // clang-format on
    oled_write_raw_P(font, sizeof(font));
}

__attribute__((weak)) void oled_print_info(void) {
    led_t led_state = host_keyboard_led_state();
    uint8_t mods = get_mods();

    oled_write_P(PSTR("Curr."), false);
    oled_write_ln_P(PSTR("Layer"), false);
    oled_write_ln_P(PSTR("~~~~~"), false);

    switch (get_highest_layer(layer_state)) {
        case _MAIN:
            oled_write_P(PSTR("Base "), false);
            oled_write_ln_P(PSTR("     "), false);
            break;
        case _NUMSYM:
            oled_write_P(PSTR("Num /"), false);
            oled_write_ln_P(PSTR("Symb"), false);
            break;
        case _NAVMEDIA:
            oled_write_P(PSTR("Nav /"), false);
            oled_write_ln_P(PSTR("Media"), false);
            break;
        case _FUNCS:
            oled_write_P(PSTR("Funcs"), false);
            oled_write_ln_P(PSTR("     "), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
            oled_write_ln_P(PSTR("     "), false);
    }

    oled_set_cursor(0, 9);
    oled_write_P(mods & MOD_MASK_SHIFT ? PSTR("SHIFT") : PSTR("     "), false);
    oled_write_P(mods & MOD_MASK_CTRL ? PSTR("CTRL ") : PSTR("     "), false);
    oled_write_P(mods & MOD_MASK_ALT ? PSTR("ALT  ") : PSTR("     "), false);
    oled_write_P(mods & MOD_MASK_GUI ? PSTR("META ") : PSTR("     "), false);

    oled_set_cursor(0,14);
    oled_write_P(led_state.caps_lock ? PSTR("CAPS<") : PSTR("caps "), false);
    oled_write_P(led_state.caps_lock ? PSTR(">LOCK") : PSTR(" lock"), false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_print_info();
    } else {
        oled_render_shrug();
    }
    return false;
}
#endif // OLED_ENABLE

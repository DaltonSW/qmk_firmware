// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

// #include "./quantum/quantum.h"
#include QMK_KEYBOARD_H

#define XXXX KC_NO
#define ____ KC_TRNS

#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)
#define CUT LCTL(KC_X)
#define UNDO LCTL(KC_Z)
#define REDO LCTL(KC_Y)


// WIP for v2
enum custom_layer {
    _MAIN,   // 0
    _NUMSYM, // 1
    _FUNCS, // 2
    _NAVMEDIA,  // 3
    _MOUSE,    // 4
    _MISC,  // 5
    _GAME,   // 6
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [_MAIN] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
            KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_BSPC,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
            KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSLS,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
            KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN, KC_QUOT,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_DEL,           KC_ESC,   KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH,   XXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    LT(2,KC_LGUI), SC_LAPO, LT(1,KC_SPC), LT(3,KC_BSPC), SC_RSPC, LT(4,KC_ENT)
        //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘

            ),
        [_NUMSYM] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
             XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,                               XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,   KC_EQL, KC_MINS, KC_PPLS, KC_UNDS,   XXXX,                             KC_LBRC,   KC_7,    KC_8,    KC_9,  KC_PIPE, KC_RBRC,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,  XXXX,                             KC_LPRN,   KC_4,    KC_5,    KC_6,  KC_TILD, KC_RPRN,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    ____,             XXXX,  KC_LCBR,   KC_1,    KC_2,    KC_3,   KC_GRV, KC_RCBR,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            ____,    ____,    ____,                     KC_P0,  KC_PDOT, KC_PENT
        //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
            ),
        [_FUNCS] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
           QK_BOOT,   XXXX,    XXXX,    XXXX,    XXXX,   TO(6),                               XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,                             KC_PSCR,  KC_F7,   KC_F8,   KC_F9,   KC_F12,   XXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_CAPS,                             KC_APP,  KC_F4,   KC_F5,   KC_F6,   KC_F11,   XXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    ____,             XXXX,  KC_PAUS,  KC_F1,   KC_F2,   KC_F3,   KC_F10,   XXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            ____,    ____,    ____,                      XXXX,    XXXX,    XXXX
        //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
            ),
        [_NAVMEDIA] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
             XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,                               XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,  KC_PGUP, KC_HOME,  KC_UP,  KC_END,    XXXX,                             KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,   XXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,   XXXX,                             KC_VOLD, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,   XXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,    UNDO,    CUT,     COPY,   PASTE,    REDO,    XXXX,             ____,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            XXXX,    XXXX,    XXXX,                      ____,    ____,    ____
        //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
            ),
        [_MOUSE] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
             XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,                               XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,    XXXX,  KC_WH_D, KC_MS_U, KC_WH_U,   XXXX,                               XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,  KC_WH_L, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_R,                              XXXX,  KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,   XXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,    UNDO,    CUT,     COPY,   PASTE,    REDO,    XXXX,             ____,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                          KC_BTN3, KC_BTN2, KC_BTN1,                     ____,    ____,    ____
        //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
            ),
        [_MISC] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
             ____,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,                               XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,                               XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,                               XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,             XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            XXXX,    XXXX,    XXXX,                      XXXX,    XXXX,    XXXX
        //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘

            ),
        [_GAME] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
            KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_BSPC,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
            KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSLS,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN, KC_QUOT,
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXX,            TO(0),    KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                           KC_ENT, KC_BSPC,  KC_DEL,                    KC_SPC,  KC_TAB,  KC_ESC
        //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
            )
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
       for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 7 ... 32:
                rgb_matrix_set_color(i, RGB_TURQUOISE);
                break;
            case _GAME:
                rgb_matrix_set_color(i, RGB_AZURE);
                break;
            case _MISC:
                rgb_matrix_set_color(i, RGB_BLUE);
                break;
            case _MOUSE:
                rgb_matrix_set_color(i, RGB_GREEN);
                break;
            case _NAVMEDIA:
                rgb_matrix_set_color(i, RGB_YELLOW);
                break;
            case _FUNCS:
                rgb_matrix_set_color(i, RGB_MAGENTA);
                break;
            case _NUMSYM:
                rgb_matrix_set_color(i, RGB_CYAN);
                break;
            default:
                rgb_matrix_set_color(i, RGB_PURPLE);
                break;
            }
         }
    return false;
}

// ~ Shows both dynamic color setting outside of a loop, and how to check flags
//
// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//     HSV hsv = {0, 255, 255};

//     if (layer_state_is(layer_state, 2)) {
//         hsv = {130, 255, 255};
//     } else {
//         hsv = {30, 255, 255};
//     }

//     if (hsv.v > rgb_matrix_get_val()) {
//         hsv.v = rgb_matrix_get_val();
//     }
//     RGB rgb = hsv_to_rgb(hsv);

//     for (uint8_t i = led_min; i < led_max; i++) {
//         if (HAS_FLAGS(g_led_config.flags[i], 0x01)) { // 0x01 == LED_FLAG_MODIFIER
//             rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
//         }
//     }
//     return false;
// }

// ~ Only light up keys with set keycodes ~
//
// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//     if (get_highest_layer(layer_state) > 0) {
//         uint8_t layer = get_highest_layer(layer_state);
//
//         for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
//             for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
//                 uint8_t index = g_led_config.matrix_co[row][col];
//
//                 if (index >= led_min && index < led_max && index != NO_LED &&
//                 keymap_key_to_keycode(layer, (keypos_t){col,row}) > ____) {
//                     rgb_matrix_set_color(index, RGB_GREEN);
//                 }
//             }
//         }
//     }
//     return false;
// }

// ~ Set the color of Caps Lock if it's active ~
//
// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//     if (host_keyboard_led_state().caps_lock) {
//         RGB_MATRIX_INDICATOR_SET_COLOR(5, 255, 255, 255); // assuming caps lock is at led #5
//     } else {
//         RGB_MATRIX_INDICATOR_SET_COLOR(5, 0, 0, 0);
//     }
//     return false;
// }

// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// enum custom_layer {
//     _MAIN,
//     _FN1,
//     _FN2,
//     _FN3,
//     _FN4,
//     _FN5,
//     _FN6,
//     _FN7,
// };

enum custom_layer {
    _MAIN,   // 0
    _SYMBOL, // 1
    _NUMBER, // 2
    _FUNCS,  // 3
    _NAV,    // 4
    _MEDIA,  // 5
    _MOUSE,  // 6
    _GAME,   // 7
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_MAIN] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_GRV,      KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_BSLS,
      KC_LBRC,      KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_RBRC,
      KC_LCTL,      KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,      KC_QUOT,
      SC_LSPO,      KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_LGUI,      KC_LALT,      KC_N,      KC_M,      KC_COMM,      KC_DOT,      KC_SLSH,      SC_RSPC,
      LT(6,KC_ENT),      LT(5,KC_BSPC),      LT(1,KC_DEL),      LT(1,KC_SPC),      LT(2,KC_TAB),      LT(3,KC_ESC)
        // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_SYMBOL] = LAYOUT( // Right Hand 1
                        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_LBRC,
      KC_AMPR,
      KC_ASTR,
      KC_LPRN,
      KC_PIPE,
      KC_RBRC,
      KC_NO,
      KC_LGUI,
      KC_LALT,
      KC_LCTL,
      KC_LSFT,
      KC_NO,
      KC_LCBR,
      KC_DLR,
      KC_PERC,
      KC_CIRC,
      KC_TILD,
      KC_RCBR,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_LT,
      KC_EXLM,
      KC_AT,
      KC_HASH,
      KC_GRV,
      KC_GT,
      KC_NO,
      KC_NO,
      KC_TRNS,
      KC_UNDS,
      KC_LPRN,
      KC_RPRN
        // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_NUMBER] = LAYOUT( // Right Hand 2
                        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_PPLS,
      KC_P7,
      KC_P8,
      KC_P9,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_LGUI,
      KC_LALT,
      KC_LCTL,
      KC_LSFT,
      KC_NO,
      KC_PMNS,
      KC_P4,
      KC_P5,
      KC_P6,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_PEQL,
      KC_P1,
      KC_P2,
      KC_P3,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_TRNS,
      KC_NO,
      KC_P0,
      KC_PDOT,
      KC_PENT
        // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_FUNCS] = LAYOUT( // Right Hand 3
                       // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_PSCR,
      KC_F7,
      KC_F8,
      KC_F9,
      KC_F12,
      KC_NO,
      KC_NO,
      KC_LGUI,
      KC_LALT,
      KC_LCTL,
      KC_LSFT,
      KC_NO,
      KC_APP,
      KC_F4,
      KC_F5,
      KC_F6,
      KC_F11,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_PAUS,
      KC_F1,
      KC_F2,
      KC_F3,
      KC_F10,
      KC_NO,
      KC_TRNS,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO
        // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_NAV] = LAYOUT( // Left Hand 1
                     // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_INS,
      KC_HOME,
      KC_UP,
      KC_END,
      KC_PGUP,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_CAPS,
      KC_LEFT,
      KC_DOWN,
      KC_RGHT,
      KC_PGDN,
      KC_NO,
      KC_LSFT,
      KC_LCTL,
      KC_LALT,
      KC_LGUI,
      KC_NO,
      KC_NO,
      KC_UNDO,
      KC_CUT,
      KC_COPY,
      KC_PSTE,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_ENT,
      KC_DEL,
      KC_BSPC,
      KC_TRNS,
      KC_NO,
      KC_NO
        // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_MEDIA] = LAYOUT( // Left Hand 2
                       // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_VOLU,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_MUTE,
      KC_MPRV,
      KC_MPLY,
      KC_MNXT,
      KC_NO,
      KC_NO,
      KC_LSFT,
      KC_LCTL,
      KC_LALT,
      KC_LGUI,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_VOLD,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_BSLS,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_TRNS,
      KC_NO
        // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_MOUSE] = LAYOUT( // Left Hand 3
                       // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_WH_D,
      KC_MS_U,
      KC_WH_U,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_WH_L,
      KC_MS_L,
      KC_MS_D,
      KC_MS_R,
      KC_WH_R,
      KC_NO,
      KC_LSFT,
      KC_LCTL,
      KC_LALT,
      KC_LGUI,
      KC_NO,
      KC_NO,
      KC_UNDO,
      KC_CUT,
      KC_COPY,
      KC_PSTE,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_NO,
      KC_BTN3,
      KC_BTN2,
      KC_BTN1,
      KC_NO,
      KC_NO,
      KC_TRNS
        // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    [_GAME] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
        _______, _______, _______, _______, _______, _______
        // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        )};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
      // HSV hsv = {HSV_PURPLE};

      // if (layer_state_is(6)) {
      //    hsv = (HSV){HSV_BLUE};
      // } else if (layer_state_is(5)) {
      //    hsv = (HSV){HSV_GREEN};
      // } else if (layer_state_is(4)) {
      //    hsv = (HSV){HSV_AZURE};
      // } else if (layer_state_is(3)) {
      //    hsv = (HSV){HSV_YELLOW};
      // } else if (layer_state_is(2)) {
      //    hsv = (HSV){HSV_MAGENTA};
      // } else if (layer_state_is(1)) {
      //    hsv = (HSV){HSV_CYAN};
      // }

      // switch(layer_state) {
      //    case 6:
      //       hsv = (HSV){HSV_BLUE};
      //       break;
      //    case 5:
      //       hsv = (HSV){HSV_GREEN};
      //       break;
      //    case 4:
      //       hsv = (HSV){HSV_AZURE};
      //       break;
      //    case 3:
      //       hsv = (HSV){HSV_YELLOW};
      //       break;
      //    case 2:
      //       hsv = (HSV){HSV_MAGENTA};
      //       break;
      //    case 1:
      //       hsv = (HSV){HSV_CYAN};
      //       break;
      //    case 0:
      //       hsv = (HSV){};
      //       break;
      // }

       for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 6:
                rgb_matrix_set_color(index, RGB_BLUE);
                break;
            case 5:
                rgb_matrix_set_color(index, RGB_GREEN);
                break;
            case 4:
                rgb_matrix_set_color(index, RGB_AZURE);
                break;
            case 3:
                rgb_matrix_set_color(index, RGB_YELLOW);
                break;
            case 2:
                rgb_matrix_set_color(index, RGB_MAGENTA);
                break;
            case 1:
                rgb_matrix_set_color(index, RGB_CYAN);
                break;
            default:
                rgb_matrix_set_color(index, RGB_PURPLE);
                break;
            }
         }
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
//                 keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
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

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
#    if defined(KEYBOARD_keebio_iris_rev7) || defined(KEYBOARD_keebio_iris_rev8)
    [_MAIN] = {ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGDN, KC_PGUP)}, [_SYMBOL] = {ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(KC_HOME, KC_END), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(KC_HOME, KC_END)}, [_NUMBER] = {ENCODER_CCW_CW(RGB_RMOD, RGB_MOD), ENCODER_CCW_CW(RGB_HUD, RGB_HUI), ENCODER_CCW_CW(RGB_SAD, RGB_SAI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}, [_FUNCS] = {ENCODER_CCW_CW(RGB_SPD, RGB_SPI), ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_UP, KC_DOWN)},
    [_NAV] = {ENCODER_CCW_CW(RGB_SPD, RGB_SPI), ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_UP, KC_DOWN)},     [_MEDIA] = {ENCODER_CCW_CW(RGB_SPD, RGB_SPI), ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_UP, KC_DOWN)},   [_MOUSE] = {ENCODER_CCW_CW(RGB_SPD, RGB_SPI), ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_UP, KC_DOWN)},      [_GAME] = {ENCODER_CCW_CW(RGB_SPD, RGB_SPI), ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_UP, KC_DOWN)},
#    else
    [_MAIN] = {ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}, [_SYMBOL] = {ENCODER_CCW_CW(KC_HOME, KC_END), ENCODER_CCW_CW(KC_MPRV, KC_MNXT)}, [_NUMBER] = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI), ENCODER_CCW_CW(RGB_SAD, RGB_SAI)}, [_FUNCS] = {ENCODER_CCW_CW(RGB_SPD, RGB_SPI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}, [_NAV] = {ENCODER_CCW_CW(RGB_SPD, RGB_SPI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}, [_MEDIA] = {ENCODER_CCW_CW(RGB_SPD, RGB_SPI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}, [_MOUSE] = {ENCODER_CCW_CW(RGB_SPD, RGB_SPI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}, [_GAME] = {ENCODER_CCW_CW(RGB_SPD, RGB_SPI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
#    endif
};
#endif

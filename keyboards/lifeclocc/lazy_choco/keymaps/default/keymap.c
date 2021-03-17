/* Copyright 2020 CJX3711
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#define xxx KC_NO
#define ___ KC_TRANSPARENT

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FLIP,
    _LOWER,
    _RAISE,
    _MOUSE
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
      KC_GRV,             KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_EQL, \
      KC_TAB,             KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_ENT, \
      LT(_MOUSE, KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_SCLN, \
      KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
      KC_LCTL,      KC_LOPT,      KC_LGUI, \
                                                    S(KC_9), S(KC_0), \
                                        LT(_RAISE, KC_DEL), LT(_LOWER, KC_BSPC), LT(_FLIP, KC_SPC)  \
    ),
    [_FLIP] = LAYOUT(
      ___,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,     S(KC_EQL), \
      ___,    KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,     S(KC_QUOT), \
      ___,    KC_H,    KC_J,    KC_K,    KC_L,     KC_QUOT,  S(KC_SLSH), \
      ___,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH, \
      ___,   ___,   ___, \
                                                  KC_LBRC , KC_RBRC, \
                                          A(KC_DEL), A(KC_BSPC), xxx  \
    ),
    [_LOWER] = LAYOUT(
      KC_CLCK, KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,  KC_F12, \
      ___,     KC_HOME,  KC_UP,    KC_END,   KC_PGUP,  ___,     ___, \
      KC_VOLU, KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_PGDN,  ___,     S(KC_SCLN), \
      KC_VOLD, ___,      ___,      ___,      ___,      ___, \
      KC_MPLY,   ___,    ___, \
                                                S(KC_LBRC), S(KC_RBRC), \
                                          KC_ENT, xxx, KC_UNDS  \
    ),
    [_RAISE] = LAYOUT(
      RESET,    KC_F1,   KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6, \
      ___,     S(KC_1),  S(KC_2),  S(KC_3),  S(KC_4),  S(KC_5),  S(KC_BSLS),  \
      ___,     S(KC_6),  S(KC_7),  S(KC_8),  S(KC_9),  S(KC_0),  KC_BSLS,  \
      CK_TOGG, ___,    ___,    ___,    ___,     ___,  \
      AU_TOG,  ___,    ___,  \
                                                 ___,  ___,  \
                                        xxx,  KC_SPC,  KC_MINS  \
    ), 
    [_MOUSE] = LAYOUT(
      xxx,     xxx,     xxx,     xxx,     xxx,     xxx,     xxx,     \
      xxx,     KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U, xxx,     xxx,     \
      xxx,     KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, xxx,     xxx,     \
      xxx,     xxx,     xxx,     xxx,     xxx,     xxx,     \
      xxx,       KC_BTN4,   KC_BTN5, \
                                                KC_ACL0, KC_ACL2, \
                                            KC_BTN3, KC_BTN2, KC_BTN1  \
    ),
};
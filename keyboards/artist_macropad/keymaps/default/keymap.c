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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        C(KC_EQUAL), KC_RBRC, C(KC_Z), KC_B, \
        C(KC_MINS), KC_LBRC, C(KC_D), KC_E, \
        LT(1, KC_ESC), LALT_T(KC_V), KC_SPC
    ),

    [_FN] = LAYOUT(
        KC_0, KC_1, KC_2, KC_5, \
        C(KC_S), C(KC_COMMA), KC_L, KC_G, \
        _______, C(KC_T), KC_LCTRL
    )
};
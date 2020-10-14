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
        C(KC_PLUS), KC_LBRC, KC_RBRC, KC_B, \
        C(KC_MINS), C(KC_D), KC_L, KC_E, \
        LT(1, KC_UNDO), LALT_T(KC_AGAIN), KC_SPC
    ),

    [_FN] = LAYOUT(
        _______, A(KC_0), A(KC_1), A(KC_3), \
        _______, C(KC_T), KC_V, _______, \
        _______, _______, _______
    )
};
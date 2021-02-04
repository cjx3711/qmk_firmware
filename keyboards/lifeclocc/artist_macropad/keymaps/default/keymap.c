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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _UPPER,
    _MID,
    _LOWER,
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_UPPER] = LAYOUT(
        C(KC_C), KC_RBRC, C(KC_J), KC_E, KC_B, \
        C(KC_V), KC_LBRC, LALT_T(KC_X), C(KC_D), C(KC_Z), \
        LCTL_T(KC_ESC), LT(1, KC_BSPC), LT(_LOWER, KC_V), KC_SPC
    ),

    [_MID] = LAYOUT(
        C(KC_X), S(KC_RBRC), C(KC_G), KC_L, KC_P, \
        _______, S(KC_LBRC), KC_D, KC_G, C(S(KC_Z)), \
        _______, xxx, C(KC_S), KC_R
    ),

    [_LOWER] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5, \
        KC_6, KC_7, KC_8, KC_9, KC_0, \
        KC_LSHIFT, KC_LALT, xxx, C(KC_SPC)
    )
};
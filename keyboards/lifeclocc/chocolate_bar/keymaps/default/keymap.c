/* Copyright 2021 CJX3711
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

#define ____ KC_TRNS

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _RAISE,
    _LOWER,
    _FN,
    _MOUSE
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                  KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_ENT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
    KC_LCTL, MO(_FN), KC_LALT, KC_LGUI, ____ ,   ____ , KC_SPC, MO(_FN), ____, ____, KC_RGUI, KC_RALT, MO(_FN), KC_RCTL
  ),

  [_RAISE] = LAYOUT(
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ , \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,  \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,  \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ , ____ ,   ____ , ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ 
  ),
  [_LOWER] = LAYOUT(
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ , \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,  \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,  \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ , ____ ,   ____ , ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ 
  ),
  [_FN] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                 KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,  \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,  \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ , ____ ,   ____ , ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ 
  ),
  [_MOUSE] = LAYOUT(
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ , \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,  \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,  \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ , ____ ,   ____ , ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ 
  ),
};

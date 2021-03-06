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
    LT(_MOUSE, KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                  KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_ENT, \
    KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC, \
    CTL_T(KC_LBRC), LT(_FN, ____), LT(_RAISE, ____) , KC_LALT, LGUI_T(KC_ENT), LT(_LOWER, KC_ENT), KC_SPC, \
    LT(_LOWER, KC_BSPC), LT(_RAISE, KC_DEL), A(KC_BSPC), KC_RGUI, KC_RALT, LT(_FN, ____), RCTL_T(KC_RBRC)
  ),

  [_RAISE] = LAYOUT(
    KC_GRV ,   KC_1 ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,                       KC_6 ,   KC_7 ,   KC_8 ,   KC_9 , KC_0 , KC_EQL , \
    KC_TILD,    KC_EXLM ,   KC_AT ,   KC_HASH ,   KC_DLR ,   KC_PERC ,             KC_CIRC, KC_AMPR,   KC_ASTR,   KC_LPRN,   KC_RPRN, KC_PLUS ,  \
    KC_MINS ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   KC_PLUS ,  \
    KC_UNDS ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ , KC_MINS ,   KC_DEL , ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   KC_EQL 
  ),
  [_LOWER] = LAYOUT(
    ____ ,   ____ , G(KC_W) , C(S(KC_TAB)) , C(KC_TAB) , G(KC_T) ,         KC_PGUP ,   KC_HOME ,   KC_UP ,   KC_END ,   ____ ,   ____ , \
    ____ ,   ____ , C(KC_LEFT) , C(KC_UP) , C(KC_RIGHT) , G(S(KC_T)) ,                 KC_PGDN ,   KC_LEFT ,   KC_DOWN ,   KC_RIGHT ,   ____ ,   ____ ,  \
    KC_SCLN ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   KC_COLN ,  \
    KC_QUOT ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ , KC_UNDS ,   KC_DEL , ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   KC_DQT 
  ),
  [_FN] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                 KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
    KC_VOLU ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,  \
    KC_VOLD ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,  \
    KC_MPLY ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ , AG_TOGG ,   ____ , ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ 
  ),
  [_MOUSE] = LAYOUT(
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 KC_WH_U ,   KC_WH_R ,   KC_MS_U ,   KC_WH_L ,   ____ ,   ____ , \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 KC_WH_D ,   KC_MS_L ,   KC_MS_D ,   KC_MS_R ,   ____ ,   ____ ,  \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   ____ ,                 KC_BTN4 ,   KC_BTN5 ,   ____ ,   ____ ,   ____ ,   ____ ,  \
    ____ ,   ____ ,   ____ ,   ____ ,   ____ ,   KC_ACL0 , KC_ACL2 ,   KC_BTN1 , KC_BTN2,  KC_BTN3 ,   ____ ,   ____ ,   ____ ,   ____ 
  ),
};

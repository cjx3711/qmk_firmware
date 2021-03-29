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

#define xxx KC_NO
#define ___ KC_TRNS

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
    KC_TAB,             KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, \
    LT(_MOUSE, KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                  KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_ENT, \
    KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
    KC_LCTL, LT(_FN, KC_APP), KC_LGUI, KC_LALT, LT(_LOWER, ___) , LT(_RAISE, KC_ENT), KC_SPC, \
                                    LT(_LOWER, KC_BSPC), LT(_RAISE, KC_DEL), A(KC_BSPC), KC_RALT, KC_RGUI, LT(_FN, KC_APP), KC_RCTL
  ),

  [_RAISE] = LAYOUT(
    KC_GRV ,   KC_1 ,     KC_2 ,     KC_3 ,      KC_4 ,     KC_5 ,               KC_6 ,    KC_7 ,     KC_8 ,      KC_9 ,      KC_0 ,     KC_EQL , \
    KC_TILD,   KC_EXLM ,  KC_AT ,    KC_HASH ,   KC_DLR ,   KC_PERC ,            KC_CIRC , KC_AMPR ,  KC_ASTR ,   KC_LPRN ,   KC_RPRN ,  KC_BSLS ,  \
    ___ ,      KC_EQL ,   KC_PLUS ,  KC_MINS ,   KC_UNDS ,  KC_COLN ,            KC_SCLN,  KC_LBRC ,  KC_RBRC ,   KC_LCBR ,   KC_RCBR ,  ___ ,  \
    ___ ,      ___ ,      ___ ,      ___ ,       ___ ,      ___ ,   ___ ,  ___ , ___ ,   ___ ,   ___ ,   ___ ,   ___ ,   ___ 
  ),
  [_LOWER] = LAYOUT(
    ___ ,     ___ , C(KC_W) , C(S(KC_TAB)) , C(KC_TAB) , C(KC_T) ,              KC_PGUP ,   KC_HOME ,   KC_UP ,   KC_END ,   ___ ,   ___ , \
    KC_CAPS,  ___ , G(S(KC_LEFT)) , G(KC_TAB) , G(S(KC_RIGHT)), C(S(KC_T)) ,    KC_PGDN ,   KC_LEFT ,   KC_DOWN , KC_RIGHT ,   ___ ,   ___ ,  \
    ___ ,     ___ ,   ___ ,   ___ ,   ___ ,   ___ ,                             ___ ,   ___ ,   ___ ,   ___ ,   ___ ,   ___ ,  \
    ___ ,     ___ ,   ___ ,   ___ ,   ___ ,   ___ , KC_UNDS ,           KC_DEL , ___ ,   ___ ,   ___ ,   ___ ,   ___ ,   ___ 
  ),
  [_FN] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                 KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
    KC_VOLU ,   xxx ,   xxx ,   xxx ,   xxx ,   xxx ,                   xxx ,    xxx ,    xxx ,    xxx ,    xxx ,    KC_INS,  \
    KC_VOLD ,   xxx ,   xxx ,   xxx ,   xxx ,   xxx ,                   xxx ,    xxx ,    xxx ,    xxx ,    xxx ,    KC_NLCK,  \
    KC_MPLY ,   xxx ,   xxx ,   xxx ,   xxx ,   xxx , AG_TOGG ,  RESET, xxx ,    xxx ,    xxx ,    xxx ,    xxx ,    KC_PSCR 
  ),
  [_MOUSE] = LAYOUT(
    KC_NLCK ,   KC_PSLS ,   KC_PAST ,   KC_P7 ,   KC_P8 ,   KC_P9 ,                      KC_WH_U ,   KC_WH_R ,   KC_MS_U ,   KC_WH_L ,   xxx ,   xxx , \
    xxx ,       xxx ,       KC_PMNS ,   KC_P4 ,   KC_P5 ,   KC_P6 ,                      KC_WH_D ,   KC_MS_L ,   KC_MS_D ,   KC_MS_R ,   xxx ,   xxx ,  \
    KC_LSFT ,   xxx ,       KC_PPLS ,   KC_P1 ,   KC_P2 ,   KC_P3 ,                      KC_BTN4 ,   KC_BTN5 ,   xxx ,   xxx ,   xxx ,   KC_RSFT ,  \
    KC_LCTL ,   xxx ,       xxx ,       KC_P0 , KC_PDOT ,   KC_ACL0 , KC_ACL2 ,   KC_BTN1 , KC_BTN2,  KC_BTN3 ,   xxx ,   xxx ,   xxx ,   KC_RCTL 
  ),
};

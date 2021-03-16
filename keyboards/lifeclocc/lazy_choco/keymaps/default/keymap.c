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
    _BASE,
    _FLIP,
    _LOWER,
    _RAISE,
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
      xxx, xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx, xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx, xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx,   xxx,   xxx, \
                                 xxx, xxx, \
                            xxx, xxx, xxx  \
    ),
    [_FLIP] = LAYOUT(
      xxx, xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx, xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx, xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx,   xxx,   xxx, \
                                 xxx, xxx, \
                            xxx, xxx, xxx  \
    ),
    [_LOWER] = LAYOUT(
      xxx, xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx, xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx, xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx,   xxx,   xxx, \
                                 xxx, xxx, \
                            xxx, xxx, xxx  \
    ),
    [_RAISE] = LAYOUT(
      xxx, xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx, xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx, xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx, xxx, xxx, xxx, xxx, xxx, \
      xxx,   xxx,   xxx, \
                                 xxx, xxx, \
                            xxx, xxx, xxx  \
    ),
};
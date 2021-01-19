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

#include "analog.h"
#include "qmk_midi.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

enum control_change_keycodes {
    MI_CC_1 = SAFE_RANGE,
    MI_CC_2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        LT(1, KC_SPACE), \
               MI_Db, MI_Eb,        MI_Gb, MI_Ab, MI_Bb, \
        MI_C , MI_D , MI_E , MI_F , MI_G , MI_A , MI_B , \
               MI_Db_1, MI_Eb_1,     MI_Gb_1, MI_Ab_1, MI_Bb_1, \
        MI_C_1, MI_D_1, MI_E_1, MI_F_1, MI_G_1, MI_A_1, MI_B_1 \
    ),
    [_FN] = LAYOUT(
        XXXXXXX, \
               MI_Db_1, MI_Eb_1,     MI_Gb_1, MI_Ab_1, MI_Bb_1, \
        MI_C_1, MI_D_1, MI_E_1, MI_F_1, MI_G_1, MI_A_1, MI_B_1, \
               MI_Db_2, MI_Eb_2,     MI_Gb_2, MI_Ab_2, MI_Bb_2, \
        MI_C_2, MI_D_2, MI_E_2, MI_F_2, MI_G_2, MI_A_2, MI_B_2
    )
};
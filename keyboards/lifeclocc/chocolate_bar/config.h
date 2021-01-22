/*
Copyright 2021 Chai Jia Xun (chaijiaxun@gmail.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1257
#define DEVICE_VER      0x0100
#define MANUFACTURER    Lifeclo.cc
#define PRODUCT         Chocolate Bar
#define DESCRIPTION     Split 40 percent ortho/staggered keyboard


/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS {D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2, B6 }
#define MATRIX_ROW_PINS_RIGHT { D7, E6, B4, B5 }
#define MATRIX_COL_PINS_RIGHT { F5, F6, F7, B1, B3, B2, B6 }

#define SPLIT_HAND_PIN F4


#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define CAPS_LOCK_LED_PIN D4
/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


// Mouse keys
#define MK_COMBINED

#define MOUSEKEY_DELAY              0    // Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL           16   // 60hz Time between cursor movements
#define MOUSEKEY_MAX_SPEED          2    // Maximum cursor speed at which acceleration stops
#define MOUSEKEY_TIME_TO_MAX        5    // Time until maximum cursor speed is reached
#define MOUSEKEY_WHEEL_DELAY        0    // Delay between pressing a wheel key and wheel movement
#define MOUSEKEY_WHEEL_INTERVAL     100  // Time between wheel movements
#define MOUSEKEY_WHEEL_MAX_SPEED    8    // Maximum number of scroll steps per scroll action
#define MOUSEKEY_WHEEL_TIME_TO_MAX  40   // Time until maximum scroll speed is reached

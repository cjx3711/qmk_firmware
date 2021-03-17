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

#include "lazy_choco.h"

void keyboard_pre_init_user(void) {
  // Call the keyboard pre init code.
  // Set our LED pins as output
  setPinOutput(F4); // Caps
  setPinOutput(D2); // Flip
  setPinOutput(D1); // Raise 
  setPinOutput(D0); // Lower
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        writePin(F4, led_state.caps_lock);
    }
    return res;
}

layer_state_t layer_state_set_kb(layer_state_t state) {
    writePinLow(D0);
    writePinLow(D1);
    writePinLow(D2);
    switch (get_highest_layer(state)) {
      case 1:
        writePinHigh(D2);
        break;
      case 2:
        writePinHigh(D0);
        break;
      case 3:
        writePinHigh(D1);
        break;
      }
    return layer_state_set_user(state);
}

/* Copyright 2021 JasonRen(biu)
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
#include "wy65.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = {
    {
        {0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10,  11,  12,  13,   NO_LED},
        {28,  27,  26,  25,  24,  23,  22,  21,  20,  19,  18,  17,  16,  15,  14},
        {29,  30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,   NO_LED,   NO_LED},
        {54,  53,  52,  51,  50,  49,  48,  47,  46,  45,  44,  43,  42,   NO_LED,   NO_LED},
        {55,  56,  57,   NO_LED,   NO_LED,  58,   NO_LED,   NO_LED,   NO_LED,  59,  60,  61,  62,  63,   NO_LED}
    },
    {
        // LED Index to Physical Position
        {0,0},{16,0},{32,0},{48,0},{64,0},{80,0},{96,0},{112,0},{128,0},{144,0},{160,0},{176,0},{192,0},{208,0},
        {224,16},{208,16},{192,16},{176,16},{160,16},{144,16},{128,16},{112,16},{96,16},{80,16},{64,16},{48,16},{32,16},{16,16},{0,16},
        {0,32},{16,32},{32,32},{48,32},{64,32},{80,32},{96,32},{112,32},{128,32},{144,32},{160,32},{176,32},{192,32},
                    {192,48},{176,48},{160,48},{144,48},{128,48},{112,48},{96,48},{80,48},{64,48},{48,48},{32,48},{16,48},{0,48},
        {0,64},{16,64},{32,64},              {80,64},                     {144,64},{160,64},{176,64},{192,64},{208,64}
    },
    {
      // LED Index to Flag
      4,4,4,4,4, 4,4,4,4,4,\
      4,4,4,4,4, 4,4,4,4,4,\
      4,4,4,4,4, 4,4,4,4,4,\
      4,4,4,4,4, 4,4,4,4,4,\
      4,4,4,4,4, 4,4,4,4,4,\
      4,4,4,4,4, 4,4,4,4,4,\
      4,4,4,4
    }
};


#endif

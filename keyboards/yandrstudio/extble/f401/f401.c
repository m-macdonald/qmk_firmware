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
#include "f401.h"
#include <ch.h>
#include "cums_spi_master.h"



void keyboard_pre_init_kb(void) {
}

void keyboard_post_init_kb(void) {
    // eeconfig_init();
    // Customise these values to desired behaviour
    // debug_enable=true;
    // debug_matrix=false;
    // debug_keyboard=true;
}
/*
 * Hocoslamfy, initialisation header
 * Copyright (C) 2014 Nebuleon Fumika <nebuleon@gcw-zero.com>
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _INIT_H_
#define _INIT_H_

#include <stdbool.h>
#ifdef OPK
#include <shake.h>
#endif

#define SCREEN_WIDTH  320
#define SCREEN_HEIGHT 240

#ifdef OPK
#define DATA_PATH "./"
#else
#define DATA_PATH "./data/"
#endif

#ifdef OPK
extern Shake_Device *device;
#endif

extern void ToGame(void);
#ifdef OPK
extern Shake_Effect flap_effect, flap_effect1, crash_effect;
#endif

extern int flap_effect_id, flap_effect_id1, crash_effect_id;


void Initialize(bool* Continue, bool* Error);
void Finalize(void);

#endif /* !defined(_INIT_H_) */

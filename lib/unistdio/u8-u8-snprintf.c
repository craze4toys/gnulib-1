/* Formatted output to strings.
   Copyright (C) 1999, 2002, 2005-2007, 2009-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify it
   under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include "unistdio.h"

#include <stdarg.h>

#define SNPRINTF u8_u8_snprintf
#define VSNPRINTF u8_u8_vsnprintf
#define FCHAR_T uint8_t
#define DCHAR_T uint8_t
#include "u-snprintf.h"

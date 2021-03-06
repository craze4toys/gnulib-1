/* Formatted output to strings in C locale.
   Copyright (C) 1999, 2002, 2006-2007, 2009-2019 Free Software Foundation,
   Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, see <https://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include "c-vasprintf.h"

#include <stdarg.h>

int
c_asprintf (char **resultp, const char *format, ...)
{
  va_list args;
  int result;

  va_start (args, format);
  result = c_vasprintf (resultp, format, args);
  va_end (args);
  return result;
}

/*******************************************************************************
 *
 * Copyright (c) 2004 Guillaume Cottenceau
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2, as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 ******************************************************************************/

#ifndef _LOG_H_
#define _LOG_H_

double get_current_time(void);

extern char current_date[50];
char* get_current_date(void);

void l_(char* file, long line, const char* func, char* fmt, ...);

#define l0(f)             l_(__FILE__, (long) __LINE__, __func__, \
                             f)
#define l1(f, a1)         l_(__FILE__, (long) __LINE__, __func__, \
                             f, a1)
#define l2(f, a1, a2)     l_(__FILE__, (long) __LINE__, __func__, \
                             f, a1, a2)
#define l3(f, a1, a2, a3) l_(__FILE__, (long) __LINE__, __func__, \
                             f, a1, a2, a3)
#define l4(f, a1, a2, a3, a4) l_(__FILE__, (long) __LINE__, __func__, \
                             f, a1, a2, a3, a4)

#endif

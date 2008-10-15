#ifndef __errdbg_h
#define __errdbg_h

/**************************************************************************\
 *
 * This file is part of the GXBase graphics library.
 * Copyright (C) 2003-2006 James Ward, Department of Computer Science,
 * University of Hull. All rights reserved.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 *
 \**************************************************************************/

//-----------------------------------------------------------------------------

#include <windows.h>
#include <stdio.h>

//---- message output ---------------------------------------------------------

#ifdef _DEBUG
extern int s_dbgMsgLevel;
// use the dbg_printf() macro with care, since it is open ended
#define dbg_printf if (s_dbgMsgLevel) printf
#else
// use the dbg_printf() macro with care, since it is open ended
// (written like this so as not to generate code in release)
#define dbg_printf if (0) printf
#endif

#define err_printf printf
#define msg_printf printf

#ifndef _DEBUG
	// release mode
	//inline void dbg_W32LastError(const char *) {}
	#define dbg_W32LastError(a) do {} while (0)
#else
	// debug mode
	void dbg_W32LastError(const char *message);
#endif

//-----------------------------------------------------------------------------

#endif//__errdbg_h

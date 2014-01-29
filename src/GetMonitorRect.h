#ifndef GXBase_GetMonitorRect_h
#define GXBase_GetMonitorRect_h

/**************************************************************************\
 *
 * This file is part of the GXBase graphics library.
 * Copyright (C) 2003-2013 James Ward, Department of Computer Science,
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

#ifdef __WIN32__

//-----------------------------------------------------------------------------

#include <Windows.h>

//-----------------------------------------------------------------------------

/**
 * This class obtains the rectangle of a specified display monitor (by number,
 * passed to the constructor). If the display can't be found, it will return
 * the rectangle of the primary display.
 */
struct GetMonitorRect :public RECT
{
	/// Constructor: pass in the display number (1..N) at construction
	GetMonitorRect( unsigned display );

	/// Callback function used to enumerate displays
	static BOOL CALLBACK enumProc(
		_In_ HMONITOR hMonitor,
		_In_ HDC hdcMonitor,
		_In_ LPRECT lprcMonitor,
		_In_ LPARAM dwData
	);

	/// Returns the width
	LONG width() const;

	/// Returns the height
	LONG height() const;

private:
	unsigned m_current;		///< Current display during enumeration
	unsigned m_desired;		///< Desired display during enumeration
};

//-----------------------------------------------------------------------------

#endif//__WIN32__

#endif//GXBase_GetMonitorRect_h

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

#include "ErrDbg.h"

#ifndef NDEBUG
// JWW 29/10/03 introduced debug message level, to avoid spewing messages
// (this allows the error message level to be set externally in debug mode
// setting to zero disables)
int s_dbgMsgLevel = 0;

#ifdef __WIN32__
void dbg_W32LastError(const char *message) {
    if (message == nullptr)
        message = "error";

	LPVOID lpMsgBuf = nullptr;
	if ( FormatMessage( 
		FORMAT_MESSAGE_ALLOCATE_BUFFER | 
		FORMAT_MESSAGE_FROM_SYSTEM	   | 
		FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		GetLastError(),
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), // Default language
		(LPTSTR) &lpMsgBuf,
		0,
		NULL 
    ) && (lpMsgBuf != nullptr) ) {
	    dbg_printf("%s: %s", message, (LPCTSTR)lpMsgBuf);
	    // Free the buffer.
	    LocalFree( lpMsgBuf );
    } else {
        dbg_printf( "%s: %lu", message, GetLastError() );
    }
}//dbg_W32LastError
#endif	// __WIN32__

#endif //NDEBUG

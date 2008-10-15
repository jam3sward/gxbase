#pragma once
#ifndef __GXBase_H
#define __GXBase_H

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

/*! \mainpage GXBase Library
 *
 * \section intro Introduction
 *
 * The GXBase Library is an object-oriented application framework for
 * developing graphics applications in C++. The current version provides
 * support for multiple OpenGL windows, within a single application.
 * The process of window creation and event handling is very much
 * simplified when compared to native WIN32 API or MFC.
 *
 * You create an application in GXBase by extending existing classes
 * such as App (application class) and GLWindow (window class) to create
 * your own custom classes. The framework sends events to your custom
 * classes by calling virtual functions. You can implement your own
 * custom behaviour by overriding these virtual functions.
 *
 * GXBase includes functions for loading and manipulating images (for
 * example to use as texture maps), loading 3DS models, as well as
 * native support for all current OpenGL extensions (through the
 * GLWindowEx class).
 *
 * \section copy Copyright
 *
 * Copyright (C) 2003-2006 James Ward
 * Department of Computer Science
 * University of Hull, Hull, UK.
 */

// Include windows ahead of GL to avoid problems
#ifdef  _WIN32
#include <windows.h>
#endif//_WIN32

#include <GL/gl.h>
#include <GL/glu.h>

// Defines namespace used by GXBASE classes
//
#ifdef  __cplusplus
	#define _GXBASE_BEGIN namespace gxbase {
	#define _GXBASE_END }
#endif//__cplusplus

// For MS VC++ only (includes VC6 and VS.NET), and not building a LIB
//
#if defined(_MSC_VER) && !defined(_LIB) // auto-link
	// Automatically link OpenGL and GLU
	#pragma comment (lib, "opengl32")
	#pragma comment (lib, "glu32")

	// Automatically link the required libraries, if the project settings
	// are correct, otherwise issues an error message.
	// Supported libraries:
	//   LIBC    (/ML)  Single Threaded
	//   LIBCD   (/MLd) Debug Single Threaded
	//   MSVCRT  (/MD)  Multithreaded DLL
	//	 MSVCRTD (/MDd) Debug Multithreaded DLL
	//
	#if defined(_MT) && defined(_DLL)
		// Multithreaded DLL (/MD or /MDd)
		#if defined(_DEBUG)
			// MSVCRTD (/MDd) Debug Multithreaded DLL
			#pragma comment (lib, "gxbasemd")
			#ifdef GXBASE_JPEG
				#pragma comment (lib, "libjpegmd")
			#endif
		#else
			// MSVCRT (/MD) Multithreaded DLL
			#pragma comment (lib, "gxbasem")
			#ifdef GXBASE_JPEG
				#pragma comment (lib, "libjpegm")
			#endif
		#endif
	#else
		#if !defined(_MT)
			// Single Threaded (/ML or /MLd)
			#if defined(_DEBUG)
				// LIBCD (/MLd) Debug Single Threaded
				#pragma comment (lib, "gxbased")
				#ifdef GXBASE_JPEG
					#pragma comment (lib, "libjpegd")
				#endif
			#else
				// LIBC (/ML) Single Threaded
				#pragma comment (lib, "gxbase")
				#ifdef GXBASE_JPEG
					#pragma comment (lib, "libjpeg")
				#endif
			#endif
		#else
			// Multithreaded (/MT or /MTd)
			// Oops, you are using one of these unsupported
			// runtime libraries:
			//	 LIBCMT  (/MT)  Multithreaded
			//	 LIBCMTD (/MTd)	Debug Multithreaded
			//
			// The project settings will need to be changed to one of the
			// supported cases listed above.
			//
			#error Please use either Single Threaded or Multithreaded DLL runtime
		#endif
	#endif
#endif//auto-link

// Automatically include other GXBASE headers, may duplicate
// Include style would ideally change to <GX/blah.h>
#include "App.h"
#include "GLWindow.h"
#include "GLWindowEx.h"
#include "Image.h"
#include "Model.h"
#include "Dialog.h"
#include "Joystick.h"

#endif//__GXBase_H

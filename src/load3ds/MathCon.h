#ifndef MATHCON_H
#define MATHCON_H

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

#include <math.h>

// MathCon.h
//
// Author : James Ward
// Created: 19/03/01
// Updated: 19/03/01
//

//------------------------------------------------------------------------------

#ifndef PI
  #ifdef M_PI
    // use value from math library if available
    #define PI M_PI
  #else
    // otherwise define it ourselves
    #define PI 3.141592654
  #endif
#endif//PI

//------------------------------------------------------------------------------

#define DegRad (PI/180.0)   // degrees to radians
#define RadDeg (180.0/PI)   // radians to degrees

//------------------------------------------------------------------------------

#define EPSILON 1E-6

//------------------------------------------------------------------------------

// Following section defines MATHSVM_DLL_CLASS to the appropriate value as
// required - it can also be defined externally, which is why we check for
// existing definition first
//
#ifndef MATHSVM_DLL_CLASS

	// If MATHSVM_EXPORTS is defined, the classes will be
	// declared as DLL export (unless DLL_CLASS is defined
	// externally)
	//
	#ifdef MATHSVM_EXPORTS
	  //// We are exporting as DLL ////
	  #ifdef  _WIN32
		//-- Windows Specific

		#ifdef  _MSC_VER
		  //-- Microsoft Visual C++ Specific
		  #define MATHSVM_DLL_CLASS __declspec(dllexport)
		#endif//_MSC_VER

		// ..add other windows compilers here
	  #endif//_WIN32

	  // ..add other OS support here
	#else//!defined(MATHSVM_EXPORTS)

	  //#ifdef  _WIN32
		//-- Windows Specific

		//#ifdef  _MSC_VER
		  //-- Microsoft Visual C++ Specific
		//  #define MATHSVM_DLL_CLASS __declspec(dllimport)
		//#endif//_MSC_VER

		// ..add other windows compilers here
	  //#else//!_WIN32

		//// We are not exporting ////
		#define MATHSVM_DLL_CLASS
		// ..add other OS support here
	  //#endif//!_WIN32

	#endif//!defined(MATHSVM_EXPORTS)

#endif//!defined(MATHSVM_DLL_CLASS)

//------------------------------------------------------------------------------

#ifndef MATHSVM_CLASS_PREFIX
  // this can be defined externally to prefix all class
  // definitions with a user specified macro - we don't
  // use it ourselves
  #define MATHSVM_CLASS_PREFIX
#endif//MATHSVM_CLASS_PREFIX

//------------------------------------------------------------------------------

#endif//MATHCON_H

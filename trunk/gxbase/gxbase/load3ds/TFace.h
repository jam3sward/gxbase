#ifndef __tface_h
#define __tface_h

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

#include "Vector3f.h"
#include "3dsdef.h"

//-----------------------------------------------------------------------------

class TFace {
public:
	TFace();

	static const WORD
		CAedge = 0x0001,	///< edge CA visible
		BCedge = 0x0002,	///< edge BC visible
		ABedge = 0x0004;	///< edge AB visible

public:
	int   vertex[3];	// vertex indices for triangle
	int	  normal[3];	// normal indices for triangle
	WORD  flags;		// face flags
	DWORD smooth;		// smoothing group
	int   matid;		// face material ID
};

inline TFace::TFace() {
	vertex[0]=0;
	vertex[1]=0;
	vertex[2]=0;
	normal[0]=0;
	normal[1]=0;
	normal[2]=0;
	flags=0;
	smooth=0;
	matid=-1;
}

//-----------------------------------------------------------------------------

#endif//__tface_h

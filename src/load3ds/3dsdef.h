#ifndef __3dsdef_h
#define __3dsdef_h

/**************************************************************************\
 *
 * This file is part of the GXBase graphics library.
 * Copyright (C) 2003-2006 James Ward, Department of Computer Science,
 * University of Hull. All rights reserved.
 *
 * UNIX port copyright (C) 2008 John Tsiombikas <nuclear@member.fsf.org>
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

#include <string>
#include <stdio.h>
#include "port.h"

//-----------------------------------------------------------------------------

// These chunk IDs come from "The Unofficial 3DStudio 3DS File Format V1.0"
// Jeff Lewis (werewolf@worldgate.com).

enum T3DSChunkID {
	M3DMAGIC			= 0x4D4D,		// 3DS Magic Number (.3DS File)
	M3D_VERSION			= 0x0002,		// Version Number
	MDATA				= 0x3D3D,		// Mesh Magic Data
	  DEFAULT_VIEW      = 0x3000,
	  VIEWPORT_LAYOUT   = 0x7001,
	  MESH_VERSION		= 0x3D3E,
	  MASTER_SCALE		= 0x0100,
	  NAMED_OBJECT		= 0x4000,
		N_TRI_OBJECT	= 0x4100,
		  POINT_ARRAY	   = 0x4110,
		  POINT_FLAG_ARRAY = 0x4111,
		  FACE_ARRAY	   = 0x4120,
		    MSH_MAT_GROUP  = 0x4130,
			SMOOTH_GROUP   = 0x4150,
		  TEX_VERTS		   = 0x4140,
		  MESH_MATRIX	   = 0x4160,
		  MESH_COLOR	   = 0x4165,
		N_DIRECT_LIGHT	= 0x4600,
		N_CAMERA		= 0x4700,
	  MAT_ENTRY			= 0xAFFF,
	    MAT_NAME		= 0xA000,
	    MAT_AMBIENT		= 0xA010,
	    MAT_DIFFUSE		= 0xA020,
	    MAT_SPECULAR	= 0xA030,
	    MAT_SHININESS	= 0xA040,
	    MAT_SHIN2PCT	= 0xA041,
	    MAT_TRANSPARENCY= 0xA050,
	    MAT_XPFALL		= 0xA052,
	    MAT_REFBLUR		= 0xA053,
	    MAT_SHADING		= 0xA100,
		MAT_TWOSIDE		= 0xA081,
	    MAT_SELF_ILPCT	= 0xA084,
	    MAT_XPFALLIN	= 0xA08A,
	    MAT_WIRESIZE	= 0xA087,
		MAT_TEXMAP		= 0xA200,
			MAT_MAPNAME     = 0xA300,
			MAT_MAP_TILING  = 0xA351,
			MAT_MAP_TEXBLUR = 0xA353,
			MAT_MAP_USCALE  = 0xA354,
			MAT_MAP_VSCALE  = 0xA356,
			MAT_MAP_UOFFSET = 0xA358,
			MAT_MAP_VOFFSET = 0xA35A,
			MAT_MAP_ANG     = 0xA35C,
			INT_PERCENTAGE  = 0x0030,
			FLOAT_PERCENTAGE= 0x0031,
		MAT_SELFIMAP	= 0xA33D,
	KFDATA				= 0xB000,		// Key Frame Data
		OBJECT_NODE_TAG = 0xB002,
			NODE_HDR		= 0xB010,
			INSTANCE_NAME	= 0xB011,
			PIVOT			= 0xB013,
			BOUNDBOX		= 0xB014,
			POS_TRACK_TAG	= 0xB020,
			ROT_TRACK_TAG	= 0xB021,
			SCL_TRACK_TAG	= 0xB022,
			NODE_ID			= 0xB030,
		KFSEG			= 0xB008,
		KFCURTIME		= 0xB009,
		KFHDR			= 0xB00A
};

//-----------------------------------------------------------------------------

#pragma pack(push,1)
	struct Face {
		WORD a,b,c;		// indices into vertex array
		WORD flags;		// visibility flags
	} PACKED_STRUCT;

	struct Chunk {
	public:
		WORD  nID;			// Chunk ID
		DWORD dwSize;		// Size of chunk
		DWORD dwBytesRead;	// Number of bytes read within chunk
	public:
		Chunk();
		void Reset();
		bool Read(FILE *fp);
		bool Skip(FILE *fp);
		WORD   ReadWord(FILE *fp);
		DWORD  ReadDWord(FILE *fp);
		float  ReadFloat(FILE *fp);
		std::string ReadString(FILE *fp);
		WORD  ID()		  const { return nID; }
		DWORD Size()	  const { return dwSize; }
		DWORD BytesRead() const { return dwBytesRead; }
		bool Read(void *pData, DWORD nBytes, FILE *fp);
	} PACKED_STRUCT;

	// 3DS Vector3
	struct Vector3 {
		float x,y,z;		// three component vector
	} PACKED_STRUCT;
#pragma pack(pop)

//-----------------------------------------------------------------------------

#endif//__3dsdef_h

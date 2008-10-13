#include "3dsdef.h"

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

Chunk::Chunk() {
	Reset();
}

void Chunk::Reset() {
	nID=0;
	dwSize=0;
	dwBytesRead=0;
}//Reset

bool Chunk::Read(FILE *fp) {
	dwBytesRead=0;
	if (!Read(&nID, sizeof(nID), fp)) return false;
	return Read(&dwSize, sizeof(dwSize), fp);
}//Read

bool Chunk::Read(void *pData, DWORD nBytes, FILE *fp) {
	if (!fp) return false;
	if (fread(pData, nBytes, 1, fp)==1) {
		dwBytesRead += nBytes;
		return true;
	} else
		return false;
}//Read

WORD Chunk::ReadWord(FILE *fp) {
	WORD w;
	if (Read(&w,sizeof(w),fp))
		return w;
	else
		return 0;
}//ReadWord

DWORD Chunk::ReadDWord(FILE *fp) {
	DWORD w;
	if (Read(&w,sizeof(w),fp))
		return w;
	else
		return 0;
}//ReadWord

float Chunk::ReadFloat(FILE *fp) {
	float f;
	if (Read(&f,sizeof(f),fp))
		return f;
	else
		return 0;
}//ReadFloat

string Chunk::ReadString(FILE *fp) {
	string s;
	char ch;
	while ( (fread(&ch,1,1,fp)==1) && (ch!=0) ) s+=ch;
	dwBytesRead += (DWORD)(s.size()+1);
	return s;
}//ReadString

bool Chunk::Skip(FILE *fp) {
	DWORD dwAmount = (dwSize - dwBytesRead);
	if ( (fp!=NULL) && (fseek(fp, dwAmount, SEEK_CUR) == 0) ) {
		dwBytesRead += dwAmount;
		return true;
	} else
		return false;
}//Skip


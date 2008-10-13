#ifndef VECTOR4F_H
#define VECTOR4F_H

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

#include <math.h>
#include "MathCon.h"

//-----------------------------------------------------------------------------

/**
 * Single precision, four element vector class.
 */

MATHSVM_CLASS_PREFIX
class MATHSVM_DLL_CLASS Vector4f {
public:
    Vector4f();

    Vector4f(const Vector4f & V);

	Vector4f(float, float, float, float);

	//-------------------------------------------------------------------------

	float   operator [] (int) const;
	float & operator [] (int);

private:
	float m[4];
};

//-----------------------------------------------------------------------------

inline Vector4f::Vector4f()
{
	m[0]=0.0;
	m[1]=0.0;
	m[2]=0.0;
	m[3]=0.0;
}

inline Vector4f::Vector4f(const Vector4f & V)
{
	m[0]=V.m[0];
	m[1]=V.m[1];
	m[2]=V.m[2];
	m[3]=V.m[3];
}

inline Vector4f::Vector4f(float a, float b, float c, float d)
{
	m[0]=a;
	m[1]=b;
	m[2]=c;
	m[3]=d;
}

//-------------------------------------------------------------------------

inline float Vector4f::operator [] (int i) const
{
	return m[i];
}

inline float & Vector4f::operator [] (int i)
{
	return m[i];
}

//-----------------------------------------------------------------------------

#endif//VECTOR4F_H

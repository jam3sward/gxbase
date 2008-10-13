#ifndef __box3f_h
#define __box3f_h

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

#include "Vector3f.h"

//-----------------------------------------------------------------------------

class Box3f {
public:
	Box3f();
	Box3f(const Box3f &);
	Box3f(const Vector3f &min, const Vector3f &max);

	Vector3f Centre() const;
	Vector3f Size() const;
	float Volume() const;

	const Vector3f & Min() const;
	const Vector3f & Max() const;

	void SetCentre (const Vector3f &);
	void SetSize   (const Vector3f &);

	const Box3f & Include (const Vector3f &rhs);
	const Box3f & Include (const Box3f &rhs);

	bool Intersects (const Box3f &box) const;
	bool Contains   (const Box3f &box) const;
	bool Contains   (const Vector3f &point) const;

	void Zero();

	void Draw() const;

	Box3f & operator = (const Box3f &);

private:
	Vector3f _min;
	Vector3f _max;
};

//-----------------------------------------------------------------------------

inline Box3f::Box3f() {
}

inline Box3f::Box3f(const Box3f &rhs) {
	*this = rhs;
}

inline Box3f & Box3f::operator = (const Box3f &rhs) {
	_min = rhs._min;
	_max = rhs._max;
	return *this;
}

inline Vector3f Box3f::Centre() const {
	return (_min+_max)*0.5f;
}

inline Vector3f Box3f::Size() const {
	return _max-_min;
}

inline float Box3f::Volume() const {
	const Vector3f size(Size());
	return (size.x*size.y*size.z);
}

inline const Vector3f & Box3f::Min() const {
	return _min;
}

inline const Vector3f & Box3f::Max() const {
	return _max;
}

//-----------------------------------------------------------------------------

#endif//__box3f_h


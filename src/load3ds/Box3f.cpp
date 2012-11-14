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

#include "Box3f.h"
#include "port.h"
#include <GL/gl.h>

//-----------------------------------------------------------------------------

void Box3f::SetCentre (const Vector3f &centre) {
	Vector3f hsize(0.5f*Size());
	_min.Sub(centre, hsize);
	_max.Add(centre, hsize);
}

//-----------------------------------------------------------------------------

void Box3f::SetSize (const Vector3f &size) {
	Vector3f centre(Centre()), hsize(0.5f*size);
	_min.Sub(centre,hsize);
	_max.Add(centre,hsize);
}

//-----------------------------------------------------------------------------

Box3f::Box3f(const Vector3f &min, const Vector3f &max) {
	_min = min;
	_max = max;
	float t;
	if (_min.x > _max.x) { t=_min.x; _min.x=_max.x; _max.x=t; }
	if (_min.y > _max.y) { t=_min.y; _min.y=_max.y; _max.y=t; }
	if (_min.z > _max.z) { t=_min.z; _min.z=_max.z; _max.z=t; }
}//Box3f

//-----------------------------------------------------------------------------

const Box3f & Box3f::Include (const Vector3f &rhs) {
	// expand to include rhs
	if (rhs.x < _min.x) _min.x=rhs.x;
	if (rhs.y < _min.y) _min.y=rhs.y;
	if (rhs.z < _min.z) _min.z=rhs.z;
	// expand max to include rhs
	if (rhs.x > _max.x) _max.x=rhs.x;
	if (rhs.y > _max.y) _max.y=rhs.y;
	if (rhs.z > _max.z) _max.z=rhs.z;
	return *this;
}//Include

//-----------------------------------------------------------------------------

const Box3f & Box3f::Include (const Box3f &rhs) {
	Include(rhs._min);
	Include(rhs._max);
	return *this;
}//Include

//-----------------------------------------------------------------------------

bool Box3f::Intersects (const Box3f &box) const {
	if ((_max.x < box._min.x) || (_min.x > box._max.x))
		return false;
	else if ((_max.y < box._min.y) || (_min.y > box._max.y))
		return false;
	else if ((_max.z < box._min.z) || (_min.z > box._max.z))
		return false;
	else
		return true;
}//Intersects

//-----------------------------------------------------------------------------

bool Box3f::Contains (const Box3f &box) const {
	return Contains(box.Min()) && Contains(box.Max());
}//Contains(box)

//-----------------------------------------------------------------------------

bool Box3f::Contains (const Vector3f &point) const {
	if (( point.x >= _min.x ) && ( point.x <= _max.x) &&
		( point.y >= _min.y ) && ( point.y <= _max.y) &&
		( point.z >= _min.z ) && ( point.z <= _max.z)
	)
		return true;
	else
		return false;
}//Contains(point)

//-----------------------------------------------------------------------------

void Box3f::Draw() const {
	const Vector3f &A=_min, &B=_max;
	glBegin(GL_LINE_STRIP);
		glVertex3f( A.x,A.y,A.z );
		glVertex3f( A.x,B.y,A.z );
		glVertex3f( A.x,B.y,B.z );
		glVertex3f( A.x,A.y,B.z );
		glVertex3f( A.x,A.y,A.z );
		glVertex3f( B.x,A.y,A.z );
		glVertex3f( B.x,A.y,B.z );
		glVertex3f( B.x,B.y,B.z );
		glVertex3f( B.x,B.y,A.z );
		glVertex3f( B.x,A.y,A.z );
	glEnd();
	glBegin(GL_LINES);
		glVertex3f( A.x,A.y,B.z );
		glVertex3f( B.x,A.y,B.z );
		glVertex3f( A.x,B.y,B.z );
		glVertex3f( B.x,B.y,B.z );
		glVertex3f( A.x,B.y,A.z );
		glVertex3f( B.x,B.y,A.z );
	glEnd();
}//Draw

//-----------------------------------------------------------------------------

void Box3f::Zero() {
	_min.Zero();
	_max.Zero();
}//Zero

//-----------------------------------------------------------------------------

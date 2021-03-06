#ifndef __tmodel_h
#define __tmodel_h

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

#include <vector>

#include "TMaterial.h"
#include "TObject.h"

//-----------------------------------------------------------------------------

class TModel {
public:
	TModel();
	TModel(const TModel &rhs);
	virtual ~TModel();

	const TModel & operator = (const TModel &rhs);

	void Free();

	std::vector<TMaterial> & Materials() { return m_material; }
	const std::vector<TMaterial> & Materials() const { return m_material; }
	std::vector<TObject>   & Objects()   { return m_object; }
	const std::vector<TObject>   & Objects() const  { return m_object; }

	int FindMaterial(const std::string &name);
	int FindObject(const std::string &name);

	long CountVertices() const;
	long CountNormals() const;
	long CountFaces() const;

	bool HasSubObjTex() const;

	bool SplitByMat();

private:
	std::vector<TMaterial> m_material;	// array of materials
	std::vector<TObject>   m_object;		// array of objects
};

//-----------------------------------------------------------------------------

inline TModel::TModel() {
}

inline TModel::TModel(const TModel &rhs) {
	*this = rhs;
}

inline const TModel & TModel::operator = (const TModel &rhs) {
	m_material = rhs.m_material;
	m_object   = rhs.m_object;
	return rhs;
}

//-----------------------------------------------------------------------------

#endif//__tmodel_h

#include <algorithm>
using namespace std;

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

#include "TModel.h"

TModel::~TModel() {
	Free();
}//~TModel

void TModel::Free() {
	m_object.clear();
	m_material.clear();
}//Free

int TModel::FindMaterial(const string &name) {
	for (unsigned n=0; n<Materials().size(); n++)
		if (Materials()[n].GetName() == name) return (int)n;
	return -1;
}//FindMaterial

int TModel::FindObject(const string &name) {
	for (unsigned n=0; n<Objects().size(); n++)
		if (Objects()[n].GetName() == name) return (int)n;
	return -1;
}//FindObject

long TModel::CountVertices() const {
	long count=0;
	vector<TObject>::const_iterator it;
	for (it=Objects().begin(); it!=Objects().end(); it++)
		count += (long)it->Vertices().size();
	return count;
}//CountVertices

long TModel::CountNormals() const {
	long count=0;
	vector<TObject>::const_iterator it;
	for (it=Objects().begin(); it!=Objects().end(); it++)
		count += (long)it->Normals().size();
	return count;
}//CountNormals

long TModel::CountFaces() const {
	long count=0;
	vector<TObject>::const_iterator it;
	for (it=Objects().begin(); it!=Objects().end(); it++)
		count += (long)it->Faces().size();
	return count;
}//CountTriangles

bool TModel::HasSubObjTex() const {
	vector<TObject>::const_iterator it;
	for (it=Objects().begin(); it!=Objects().end(); it++)
		if (it->GetSubObjTex()) return true;
	return false;
}//HasSubObjTex

bool TModel::SplitByMat() {
	// don't have sub-object textures, just return true
	if (!HasSubObjTex()) return true;

	// otherwise, any objects that have sub-object textures will be split
	unsigned n, nObj = (unsigned)m_object.size();
	for (n=0; n<nObj; n++) {
		// does this object have sub-object materials?
		if (m_object[n].GetSubObjTex()) {
			// get list of material IDs in use for this object
			vector<int> ids;
			for (unsigned f=0; f<m_object[n].Faces().size(); f++) {
				int id = m_object[n].Faces()[f].matid;
				if (find(ids.begin(),ids.end(), id) == ids.end())
					ids.push_back(id);
			}
			unsigned i;

#ifdef  _DEBUG
			printf("object %d uses materials:", (int)n);
			for (i=0; i<ids.size(); i++)
				printf(" %d", (int)ids[i]);
			printf("\n");
#endif//_DEBUG

			// make a temporary copy
			TObject tmp(m_object[n]);
			// split by material. first object is assigned to m_object[n]
			// (to avoid having to shift remainder of vector down), and
			// the others are appended
			m_object[n] = tmp;
			for (i=0; i<ids.size(); i++) {
				if (i==0)
					m_object[n].AssignFacesByMatID(tmp, ids[i]);
				else {
					m_object.push_back( TObject() );
					m_object.back().AssignFacesByMatID(tmp, ids[i]);
				}
			}//for(i)
		}//if(sub-tex)
	}//for(obj)

	return true;
}//SplitByMat

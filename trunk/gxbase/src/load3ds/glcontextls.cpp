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

#include <assert.h>
#include <GL/gl.h>
#include "glcontextls.h"
#include <vector>

#include "port.h"

using namespace std;

//-----------------------------------------------------------------------------

/**
 * This is just a simple storage structure. It has some default initialisation
 * and a couple of helper functions for allocation/deallocation, but is
 * intended to be shallow copied by the vector class.
 */
struct Ctx {
	Ctx() :context(0),data(0) {}

	bool Alloc(long size);
	void Free();

	void *context;
	void *data;
};

bool Ctx::Alloc(long size) {
	Free();
	data = new BYTE[size];
	return (data!=NULL);
}//Alloc

void Ctx::Free() {
	delete [] (BYTE*)data;
	data=0;
}//Free

//-----------------------------------------------------------------------------

class GLContextLSEx {
public:
	/**
	 * Free all storage and empty the list
	 */
	void FreeGlobal();

	/**
	 * Return the current context ID
	 */
	void *GetCurrentContext();

	/**
	 * Find the given context. If 'bCreate' is set to true, the context is
	 * created if it doesn't exist. Returns a pointer to the new context
	 * structure, or NULL in case of error.
	 */
	Ctx *Find(void *context, bool bCreate=false);

	/**
	 * Find the current context structure
	 */
	Ctx *FindCurrent(bool bCreate=false);

	/**
	 * Remove a context from the list. Any storage associated with the context
	 * will be released. Returns true if an item was removed, false otherwise.
	 */
	bool Remove(void *context);

	/**
	 * Remove the current context structure. Equivalent to calling Remove()
	 * with the current context ID.
	 */
	bool RemoveCurrent();

	/**
	 * Return number of context structures in the list
	 */
	int Count() const { return (int)m_list.size(); }

	/**
	 * Return context structure at the given index, in the range 0..Count()-1
	 */
	Ctx & operator [] (int n) { return m_list[n]; }

private:
	vector<Ctx> m_list;
};

//-----------------------------------------------------------------------------

inline void *GLContextLSEx::GetCurrentContext() {
#ifdef  _WIN32
	return (void*)wglGetCurrentContext();
#endif

#ifdef __X11__
	return (void*)glXGetCurrentContext();
#endif
}//GetCurrentContext

//-----------------------------------------------------------------------------

Ctx *GLContextLSEx::Find(void *context, bool bCreate) {
	if (!context) return NULL;

	vector<Ctx>::iterator it;
	for (it=m_list.begin(); it!=m_list.end(); it++)
		if (it->context == context) return &(*it);

	// not found
	if (bCreate) {
		// create a new one
		m_list.push_back(Ctx());
		Ctx &ctx = m_list.back();
		ctx.context = context;
		return &ctx;
	} else
		return NULL;
}//Find

//-----------------------------------------------------------------------------

Ctx *GLContextLSEx::FindCurrent(bool bCreate) {
	return Find(GetCurrentContext(), bCreate);
}//FindCurrent

//-----------------------------------------------------------------------------

void GLContextLSEx::FreeGlobal() {
	vector<Ctx>::iterator it;
	// free all storage on the list
	for (it=m_list.begin(); it!=m_list.end(); it++)
		it->Free();	// free storage
	// empty the list
	m_list.clear();
}//FreeGlobal

//-----------------------------------------------------------------------------

/**
 * Remove a context from the list. Any storage associated with the context
 * will be released. Returns true if an item was removed, false otherwise.
 */
bool GLContextLSEx::Remove(void *context) {
	if (!context) return false;

	vector<Ctx>::iterator it;
	for (it=m_list.begin(); it!=m_list.end(); it++)
		if (it->context == context) {
			// free storage
			it->Free();
			// remove from list
			m_list.erase(it);
			return true;
		}
	return false;
}//Remove

//-----------------------------------------------------------------------------

/**
 * Remove the current context structure. Equivalent to calling Remove()
 * with the current context ID.
 */
inline bool GLContextLSEx::RemoveCurrent() {
	return Remove( GetCurrentContext() );
}//RemoveCurrent

//-----------------------------------------------------------------------------

/**
 * Default constructor
 */
GLContextLS::GLContextLS() {
	extra = new GLContextLSEx;
	assert(extra!=NULL);
}//GLContextLS

//-----------------------------------------------------------------------------

/**
 * Destructor
 */
GLContextLS::~GLContextLS() {
	FreeGlobal();
	delete extra;
}//~GLContextLS

//-----------------------------------------------------------------------------

/**
 * Get a unique identifier for the current context. Returns NULL if
 * not called from a valid OpenGL context.
 */
void *GLContextLS::GetCurrentContext() {
	return extra->GetCurrentContext();
}//GetCurrentContext

//-----------------------------------------------------------------------------

/**
 * Allocate a block of storage associated with the current OpenGL
 * context. If there is no current context, the allocation fails.
 * If an existing block is reallocated, it will be allocated to the
 * new size (and the contents lost).
 * Returns true if successful, false in case of failure.
 */
bool GLContextLS::AllocData(long nBytes) {
	if (!nBytes) {
		FreeData();
		return true;
	}
	Ctx *ctx = extra->FindCurrent(true);
	if (ctx)
		return ctx->Alloc(nBytes);
	else
		return false;
}//AllocData

//-----------------------------------------------------------------------------

/**
 * Free a previously allocated block of storage associated with the
 * current OpenGL context. If there is no current context, or no
 * allocated data block, the call is ignored.
 */
void GLContextLS::FreeData() {
	extra->RemoveCurrent();
}//FreeData

//-----------------------------------------------------------------------------

/**
 * Returns a temporary pointer to the storage block associated with
 * the current OpenGL context. If there is no current context, or no
 * allocated storage, NULL is returned.
 */
void *GLContextLS::GetData() {
	Ctx *ctx = extra->FindCurrent(true);
	return (ctx!=NULL)?ctx->data:NULL;
}//GetData

//-----------------------------------------------------------------------------

/**
 * Free the storage block associated with a particular OpenGL context.
 * If there is no such known context, or no allocated storage, NULL is
 * returned.
 */
void GLContextLS::FreeData(void *context) {
	extra->Remove(context);
}//FreeData

//-----------------------------------------------------------------------------

/**
 * Free ALL allocated storage, on all known contexts.
 */
void GLContextLS::FreeGlobal() {
	extra->FreeGlobal();
}//FreeGlobal

//-----------------------------------------------------------------------------

/**
 * Return number of OpenGL contexts known.
 */
int GLContextLS::Count() const {
	return extra->Count();
}//Count

//-----------------------------------------------------------------------------

/**
 * Return an OpenGL context ID, given an index from 0..Count()-1
 * If the index is out of range, NULL is returned.
 */
void *GLContextLS::operator [] (int n) const {
	if ((n >= 0) && (n < Count()))
		return (*extra)[n].context;
	else
		return NULL;
}//operator[]

//-----------------------------------------------------------------------------

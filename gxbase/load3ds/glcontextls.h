#ifndef __glcontextls_h
#define __glcontextls_h

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

class GLContextLSEx;

/**
 * OpenGL Context Local Storage. This class allows storage of data blocks,
 * associated with a particular OpenGL context. This is useful to manage
 * separate display lists per context.
 */
class GLContextLS {
public:
	/**
	 * Default constructor
	 */
	GLContextLS();

	/**
	 * Destructor
	 */
	virtual ~GLContextLS();

	/**
	 * Get a unique identifier for the current context. Returns NULL if
	 * not called from a valid OpenGL context.
	 */
	void *GetCurrentContext();

	/**
	 * Allocate a block of storage associated with the current OpenGL
	 * context. If there is no current context, the allocation fails.
	 * If an existing block is reallocated, it will be allocated to the
	 * new size (and the contents lost).
	 * Returns true if successful, false in case of failure.
	 */
	bool AllocData(long nBytes);

	/**
	 * Free a previously allocated block of storage associated with the
	 * current OpenGL context. If there is no current context, or no
	 * allocated data block, the call is ignored.
	 */
	void FreeData();

	/**
	 * Returns a temporary pointer to the storage block associated with
	 * the current OpenGL context. If there is no current context, or no
	 * allocated storage, NULL is returned.
	 */
	void *GetData();

	/**
	 * Free the storage block associated with a particular OpenGL context.
	 * If there is no such known context, or no allocated storage, NULL is
	 * returned.
	 */
	void FreeData(void *context);

	/**
	 * Free ALL allocated storage, on all known contexts.
	 */
	void FreeGlobal();

	/**
	 * Return number of OpenGL contexts known.
	 */
	int Count() const;

	/**
	 * Return an OpenGL context ID, given an index from 0..Count()-1
	 * If the index is out of range, NULL is returned.
	 */
	void *operator [] (int n) const;

private:
	/**
	 * private: copy constructor not supplied
	 */
	GLContextLS(const GLContextLS &) {}

	/**
	 * private: assignment operator not supplied
	 */
	GLContextLS & operator = (const GLContextLS &) { return *this; }

private:
	GLContextLSEx *extra;
};

//-----------------------------------------------------------------------------

#endif//__glcontextls_h

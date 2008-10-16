#include "glexfp.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * This file provides the manually written portion of GLEX.
 * These are the functions that don't need to be changed as
 * a result of the automatic code generation. However, they
 * do of course need to be consistent with the header..
 *
 * J.Ward, Computer Science, University of Hull, UK
 * Visit the SGI OpenGL Extensions Registry for detailed
 * extension specifications:
 *   http://oss.sgi.com/projects/ogl-sample/registry
 */

//-----------------------------------------------------------------------------

bool glexfp::Supports(const char *ext) const {
	// check that extension string is valid pointer
	if (!ext) return false;

	// local function to search extension strings
	static struct tagLocal {
		/**
		 * Returns true if sub-string 'subStr' is found in the space separated list
		 * of extensions 'extStr', false otherwise. Note: returns false if either
		 * string pointer is NULL, or if subStr is empty or contains a space.
		 */
		static bool SubSearch(const char *subStr, const char *extStr) {
			// check that 'subStr' is valid
			if ( (subStr==NULL) || (subStr[0]==0) || strchr(subStr,' ') ) return false;

			// check that 'extStr' is valid
			if (extStr==NULL) return false;

			const char *ptr = extStr, *found, *end;
			do {
				// look for extension
				found = strstr(ptr,subStr);
				if (found == NULL) break;

				// get end of string
				end = &found[strlen(found)-1];

				// make sure it isn't a substring of a name
				if ( (found == extStr) || (found[-1] == ' ') )
					if ( (end[1] == 0) || (end[1] == ' ') )
						return true; // success

				// try again
				ptr = &end[1];
			} while (1);

			// not found
			return false;
		}//SubSearch
	} local;

#ifdef __WIN32__
	// this early out is aimed to save string search
	if ((ext[0]=='W') && (strstr(ext,"WGL")==ext)) {
		// WGL_xxx extension
		HDC hdc = wglGetCurrentDC();
		if (!hdc) return false;
		if (!wglGetExtensionsStringARB) return false;
		const char *sGLExt = (const char *)wglGetExtensionsStringARB(hdc);
		return local.SubSearch(ext, sGLExt);
	} else {
#endif
		// GL_xxx extension (or something else)
		const char *sGLExt = (const char *)glGetString(GL_EXTENSIONS);
		return local.SubSearch(ext, sGLExt);
#ifdef __WIN32__
	}
#endif
}//Supports

//-----------------------------------------------------------------------------

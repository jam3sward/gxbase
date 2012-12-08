/* portability header */
#ifndef GXBASE_PORT_H_
#define GXBASE_PORT_H_

#if defined(__APPLE__) && defined(__MACH__)
#define __unix__
#endif

#if defined(_WIN32) && !defined(__WIN32__)
#define __WIN32__
#endif

#ifdef __WIN32__
#include <windows.h>
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#else
#include <inttypes.h>

typedef uint8_t BYTE;
typedef uint16_t WORD;
typedef uint32_t DWORD;
typedef int32_t LONG;

typedef int HINSTANCE;

/* define away some stupid win32 macros */
#define CALLBACK
#endif

#if defined(__unix__) && !defined(__APPLE__)
#define __X11__

#include <X11/Xlib.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glx.h>
#endif

#ifdef __GNUC__
#define PACKED_STRUCT	__attribute__((packed))
#else
#define PACKED_STRUCT
#endif

// MS VC++ _vsnprintf(...) returns one of:
//   * string length, not including terminating null
//   * negative value if error occurs
//   * returns 1 if too big for buffer (fills buffer, doesn't terminate)
#ifdef _MSC_VER
#if (_MSC_VER >= 1400)
#define vsnprintf(b, c, f, p)	_vsnprintf_s(b, c, _TRUNCATE, f, p)
#else
#define vsnprintf(b, c, f, p)	_vsnprintf(b, c, f, p)
#endif	// _MSC_VER >= 1400
#endif	// _MSC_VER

#ifdef __unix__
#define _stricmp(s1, s2)		strcasecmp(s1, s2)
#include <libgen.h>	// for dirname()
#include <limits.h>
#define MAX_PATH	PATH_MAX
#endif//__unix__

#endif	/* GXBASE_PORT_H_ */

#ifndef GXBASE_WINDOW_EX_H_
#define GXBASE_WINDOW_EX_H_

#include "port.h"

// include the appropriate platform-specific WindowEx header

#ifdef __WIN32__
#include "winex_w32.h"
#endif

#ifdef __X11__
#include "winex_x11.h"
#endif

#endif	// GXBASE_WINDOW_EX_H_

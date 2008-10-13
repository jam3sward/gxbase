#include "GXBase.h"
using namespace gxbase;

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

// TODO: SDL version was copied from a previous lib i wrote, and is unfinished

#ifdef _WIN32
	#include <windows.h>
	#include <mmsystem.h>
	#ifdef _MSC_VER
		#pragma comment (lib,"winmm")
	#endif//_MSC_VER
	// not using SDL in WIN32
	#undef GXB_JOY_SDL
#else
	// other platforms will use SDL currently
	#define GXB_JOY_SDL
#endif

#ifdef GXB_JOY_SDL
	#include "SDL.h"
#endif//GXB_JOY_SDL

//-----------------------------------------------------------------------------

#ifdef GXB_JOY_SDL
	static long _instance=0;
	static bool _sdlup=false;
#endif

//-----------------------------------------------------------------------------

Joystick::Joystick() {
	_joy=0;
	m_number = 0;
	m_time   = 0;

	#ifdef GXB_JOY_SDL
		if (!_instance) {
			// initialise SDL
			if (SDL_Init( SDL_INIT_JOYSTICK ) != 0) {
				fprintf(stderr, "Unable to initialise joystick\n");
				_sdlup=true;
			}
		}
		_instance++;
	#endif//GXB_JOY_SDL
}//Joystick

//-----------------------------------------------------------------------------

Joystick::~Joystick() {
	Close();

	#ifdef GXB_JOY_SDL
		_instance--;
		if (!_instance) {
			// shutdown SDL joystick only
			SDL_QuitSubSystem(SDL_INIT_JOYSTICK);
		}
	#endif//GXB_JOY_SDL
}//~Joystick

//-----------------------------------------------------------------------------

#ifdef GXB_JOY_SDL
	bool Joystick::Open() {
		if (_joy) return true;

		// number of joysticks
		int nJoysticks = SDL_NumJoysticks();

		// no joysticks found
		if (!nJoysticks) return false;

		SDL_Joystick *joy = 0;	// joystick handle

		// open joystick
		joy = SDL_JoystickOpen(0);	// first one
		if (!joy) return false;

		_joy =(void*)joy;
		return true;
	}//Open
#endif//GXB_JOY_SDL

#ifndef GXB_JOY_SDL
	bool Joystick::Open(int n) {
		if (_joy) return true;

		// number out of range?
		if ((n < 0) || (n >= Count())) return false;

		// JWW 11/03/03 maybe there is one, but it's unplugged?
		JOYINFO joy;
		if (joyGetPos(n, &joy) != JOYERR_NOERROR) return false;

		_joy = new JOYINFOEX;
		if (!_joy) return false;
		memset(_joy,0,sizeof(JOYINFOEX));
		// store joystick ID number
		m_number = n;

		return true;
	}//Open
#endif

//-----------------------------------------------------------------------------

/**
 * Returns the number of joysticks available.
 */
int Joystick::Count() {
	#ifdef _WIN32
		// number of joysticks
		return joyGetNumDevs(); 
	#else if defined(GXB_JOY_SDL)
		// number of joysticks
		return SDL_NumJoysticks();
	#endif
}//Count

//-----------------------------------------------------------------------------

void Joystick::Close() {
	if (!_joy) return;

#ifdef GXB_JOY_SDL
	// close joystick (if any)
	SDL_JoystickClose((SDL_Joystick*)_joy);
	_joy=0;
#else
	delete (JOYINFOEX*)_joy;
	_joy=0;
	m_number=0;
#endif
}//Close

//-----------------------------------------------------------------------------

const char *Joystick::Name() const {
	if (!_joy)
		return "";
	else {
		#ifdef GXB_JOY_SDL
			return SDL_JoystickName(0);
		#else
			// NOTE: this is static because we pass out a temporary pointer
			// to a string from this structure
			static JOYCAPS c;
			if (joyGetDevCaps(m_number, &c, sizeof(c)) == JOYERR_NOERROR) {
				return c.szPname?c.szPname:"";
			} else
				return "";
		#endif
	}
}//Name

//-----------------------------------------------------------------------------

void Joystick::Update() {
	#ifdef  GXB_JOY_SDL
		if (_joy) SDL_JoystickUpdate();
	#else
		if (_joy) {
			JOYINFOEX *pJoy=(JOYINFOEX*)_joy;
			pJoy->dwSize  = sizeof(JOYINFOEX);
			pJoy->dwFlags = JOY_RETURNALL;
			joyGetPosEx(m_number, pJoy);
		}
	#endif//GXB_JOY_SDL
}//Update

//-----------------------------------------------------------------------------

#ifdef GXB_JOY_SDL
	float Joystick::Axis  (int n) const {
		if (_joy)
			return SDL_JoystickGetAxis((SDL_Joystick*)_joy,n)/32768.0f;
		else
			return 0.0f;
	}//Axis
#else
	float Joystick::Axis  (int n) const {
		if (_joy) {
			JOYINFOEX *pJoy = (JOYINFOEX*)_joy;
			const float scale=1.0f/32768.0f, offset=-1.0f;
			switch (n) {
			case 0:  return scale*pJoy->dwXpos+offset; break;
			case 1:  return scale*pJoy->dwYpos+offset; break;
			case 2:  return scale*pJoy->dwZpos+offset; break;
			case 3:  return scale*pJoy->dwRpos+offset; break;
			case 4:  return scale*pJoy->dwUpos+offset; break;
			case 5:  return scale*pJoy->dwVpos+offset; break;
			default: return 0.0f;
			}
		} else
			return 0.0f;
	}//Axis
#endif

//-----------------------------------------------------------------------------

#ifdef GXB_JOY_SDL
	bool Joystick::Button(int n) const {
		if (_joy)
			return (SDL_JoystickGetButton((SDL_Joystick*)_joy,n)!=0);
		else
			return false;
	}//Button
#else
	bool Joystick::Button(int n) const {
		if (_joy) {
			JOYINFOEX *pJoy=(JOYINFOEX*)_joy;
			return ((pJoy->dwButtons & (1<<n))!=0);
		} else
			return false;
	}//Button
#endif

//-----------------------------------------------------------------------------

#include "GetMonitorRect.h"

//-----------------------------------------------------------------------------

GetMonitorRect::GetMonitorRect( unsigned display ) :
	m_current( 1 ),
	m_desired( display )
{
	/// Enumerate the display monitors
	EnumDisplayMonitors(
		0, 0, &enumProc, reinterpret_cast<LPARAM>(this)
	);
}

//-----------------------------------------------------------------------------

BOOL CALLBACK GetMonitorRect::enumProc(
	_In_ HMONITOR hMonitor,
	_In_ HDC hdcMonitor,
	_In_ LPRECT lprcMonitor,
	_In_ LPARAM dwData
) {
	GetMonitorRect *self = reinterpret_cast<GetMonitorRect*>(dwData);

	// get the monitor name
	MONITORINFOEX info;
	memset( &info, 0, sizeof(info) );
	info.cbSize = sizeof(info);
	if ( GetMonitorInfo(hMonitor, &info) == FALSE) {
		// failed: skip this one and continue enumeration
		return TRUE;
	}

	// get the display device info, using the monitor name
	DISPLAY_DEVICE device = {};
	device.cb = sizeof(device);
	if ( EnumDisplayDevices(info.szDevice, 0, &device, 0) == FALSE ) {
		// failed: skip this one and continue enumeration
		return TRUE;
	}

	// check if it's a real display
	if ( (device.StateFlags & DISPLAY_DEVICE_ATTACHED_TO_DESKTOP) == 0 ) {
		// device is not attached to desktop: continue enumeration
		return TRUE;
	}

	// have we found the desired display?
	bool foundDisplay = ( self->m_current == self->m_desired );

	// if this is the primary display monitor, or the desired display:
	if ( ((info.dwFlags & MONITORINFOF_PRIMARY) > 0) ||	foundDisplay ) {
		// store the display rectangle
		self->left   = lprcMonitor->left;
		self->right  = lprcMonitor->right;
		self->top	 = lprcMonitor->top;
		self->bottom = lprcMonitor->bottom;

		// if this is the desired display, stop enumeration
		if ( foundDisplay ) return FALSE;
	}

	// not found: increase display count and continue enumeration
	self->m_current++;
	return TRUE;
}

//-----------------------------------------------------------------------------

LONG GetMonitorRect::width() const {
	return right - left;
}

//-----------------------------------------------------------------------------

LONG GetMonitorRect::height() const {
	return bottom - top;
}

//-----------------------------------------------------------------------------

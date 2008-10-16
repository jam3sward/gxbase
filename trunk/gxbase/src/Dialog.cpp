#include <assert.h>
#include <string>
#include <string.h>
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

#include "Dialog.h"
using namespace gxbase;

#ifdef __unix__
#include <limits.h>
#define MAX_PATH	PATH_MAX
#endif

//-----------------------------------------------------------------------------

_GXBASE_BEGIN

class FileDialogEx {
public:
	FileDialogEx();

	DWORD  m_flags;		///< File dialog flags (native windows format)
	string m_sTitle;	///< Title string for dialog box
	string m_sFilename;	///< Filename for dialog box
	string m_sPathname;	///< Full pathname of file selected
	string m_sFilter;	///< Filter string for file dialog
	string m_sDefExt;	///< Default file extension
};

_GXBASE_END

FileDialogEx::FileDialogEx() {
	m_flags     = 0;
	m_sTitle    = "Open";
	m_sFilename = "";
	m_sPathname = "";
	m_sFilter   = "";
	m_sDefExt   = "";
}

FileDialog::FileDialog() {
	extra = new FileDialogEx;
	assert(extra!=NULL);
}

FileDialog::FileDialog(
	const char *sDefExt,	///< default filename extension
	const char *sFileName,	///< default filename
	const char *sFilter,	///< filter, for file type selection
	Flags	    flags		///< flags control dialog appearance/behaviour
) {
	extra = new FileDialogEx;
	assert(extra!=NULL);

	SetDefaultExt(sDefExt);
	SetFileName(sFileName);
	SetFilter(sFilter);
	SetFlags(flags);
}

FileDialog::~FileDialog() {
	delete extra;
}

bool FileDialog::SetTitle(const char *sTitle) {
	if (sTitle) {
		extra->m_sTitle = sTitle;
		return true;
	} else
		return false;
}

const char *FileDialog::GetTitle() const {
	return extra->m_sTitle.c_str();
}

bool FileDialog::Show(bool bOpenDlg) {
	// convert file filter format from '|' separated to '\0'
	// separated (with double \0\0 terminator)
	int nFilterSize = (int)extra->m_sFilter.length()+1;
	char *szFilter = new char[nFilterSize+1];
	if (!szFilter) return false;
	szFilter[nFilterSize]=0;	// triple terminate with \0 :)
	strncpy(szFilter, extra->m_sFilter.c_str(), nFilterSize);
	// convert '|' chars to '\0' chars
	for (int n=0; n<nFilterSize; n++)
		if (szFilter[n] == '|') szFilter[n]='\0';

	// calculate buffer size required for filename
	DWORD nFileBuffSize = MAX_PATH+32;
	if (extra->m_sFilename.length()+1 > nFileBuffSize)
		nFileBuffSize = (DWORD)extra->m_sFilename.length()+1;
	// allocate filename buffer
	char *szFile = new char[nFileBuffSize+1];
	if (!szFile) {
		// allocation failed
		delete [] szFilter;
		return false;
	}
	// copy filename into buffer
	strncpy(szFile, extra->m_sFilename.c_str(), nFileBuffSize);
	// null terminate 
	szFile[nFileBuffSize]=0;	// (buffer really 1 byte larger)

#ifdef __WIN32__
	// fill in openfilename structure
	OPENFILENAME ofn;
	memset(&ofn,0,sizeof(ofn));
	ofn.lStructSize = sizeof(ofn);
	ofn.lpstrTitle  = extra->m_sTitle.c_str();
	ofn.lpstrFile   = szFile;
	ofn.nMaxFile    = nFileBuffSize;
	ofn.Flags		= extra->m_flags;
	// insert filter string
	if (extra->m_sFilter.length()) {
		ofn.lpstrFilter  = szFilter;
		ofn.nFilterIndex = 1;
	} else {
		// if string is empty, don't display any filters
		ofn.lpstrFilter = NULL;
	}
	// insert default file extension
	if (extra->m_sDefExt.length())
		ofn.lpstrDefExt = extra->m_sDefExt.c_str();
#endif

	// status flag
	bool ok=false;

#ifdef __WIN32__
	// display open/save file dialog
	if ( (bOpenDlg ? GetOpenFileName(&ofn) : GetSaveFileName(&ofn)) ) {
		// save full pathname for later use
		extra->m_sPathname = szFile;
		ok=true;
	} else {
		// clear filename if nothing selected
		extra->m_sPathname = "";
	}
#endif

	// clean up
	delete [] szFilter;
	delete [] szFile;

	// return status, true if OK, false if Cancel (or error)
	return ok;
}//Show

bool FileDialog::SetFileName(const char *sFileName) {
	if (sFileName) {
		extra->m_sFilename = sFileName;
		return true;
	} else
		return false;
}

const char *FileDialog::GetPathName() const {
	return extra->m_sPathname.c_str();
}

bool FileDialog::SetFilter(const char *sFilter) {
	if (sFilter) {
		extra->m_sFilter = sFilter;
		return true;
	} else
		return false;
}//SetFilter

const char *FileDialog::GetFilter() const {
	return extra->m_sFilter.c_str();
}

bool FileDialog::SetDefaultExt(const char *sDefExt) {
	if (!sDefExt || (strchr(sDefExt,'.')!=0) || (strlen(sDefExt)>3))
		return false;
	extra->m_sDefExt = sDefExt;
	return true;
}

const char *FileDialog::GetDefaultExt() const {
	return extra->m_sDefExt.c_str();
}

bool FileDialog::SetFlags(Flags f) {
#ifdef __WIN32__
	// convert our flags to native windows format
	extra->m_flags =
		((f&PathMustExist)	? OFN_PATHMUSTEXIST : 0) |
		((f&FileMustExist)	? OFN_FILEMUSTEXIST : 0) |
		((f&CreatePrompt)	? OFN_CREATEPROMPT  : 0) |
		((f&HideReadOnly)	? OFN_HIDEREADONLY  : 0) |
		((f&NoChangeDir)	? OFN_NOCHANGEDIR	: 0) |
		((f&OverwritePrompt)? OFN_OVERWRITEPROMPT : 0);
	// always succeeds
#endif
	return true;
}//SetFlags

FileDialog::Flags FileDialog::GetFlags() const {
	// used to accumulate flags, in our own format
	Flags flags=0;
#ifdef __WIN32__
	// convert flags from native windows flags to our subset
	if (extra->m_flags & OFN_PATHMUSTEXIST) flags |= PathMustExist;
	if (extra->m_flags & OFN_FILEMUSTEXIST) flags |= FileMustExist;
	if (extra->m_flags & OFN_CREATEPROMPT)  flags |= CreatePrompt;
	if (extra->m_flags & OFN_HIDEREADONLY)  flags |= HideReadOnly;
	if (extra->m_flags & OFN_NOCHANGEDIR)   flags |= NoChangeDir;
	if (extra->m_flags & OFN_OVERWRITEPROMPT) flags |= OverwritePrompt;
	// return flags to caller
#endif
	return flags;
}//GetFlags

//-----------------------------------------------------------------------------

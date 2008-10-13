#include "DirList.h"
#include <io.h>

DirList::DirList() {
	m_sPath    = "";
	m_sPattern = "*.*";
}

DirList::~DirList() {
	Free();
}

bool DirList::SetPath(const string &path) {
	m_sPath = path;
	return true;
}

bool DirList::SetPattern(const string &pattern) {
	m_sPattern = pattern;
	return true;
}

bool DirList::Update() {
	// free existing contents
	Free();

	// find first file
    struct _finddata_t c_file;
    intptr_t hFile = _findfirst(m_sPattern.c_str(), &c_file);
	// drop out if we didn't find any file
	if (hFile == -1L) return false;

	do {
		// add filename(s) to list
		m_data.push_back( string(c_file.name) );
	} while (_findnext(hFile, &c_file) == 0);

    _findclose(hFile);

	// success if we found at least one file
	return (m_data.size() > 0);
}//Update

void DirList::Free() {
	m_data.clear();
}//Free

long DirList::Count() const {
	return (long)m_data.size();
}

const string & DirList::operator [] (long n) const {
	return m_data[n];
}

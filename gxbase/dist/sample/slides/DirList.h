#ifndef __DirList_H
#define __DirList_H

#include <string>
#include <vector>
using namespace std;

class DirList {
public:
	DirList();
	virtual ~DirList();

	bool SetPath(const string &path);
	bool SetPattern(const string &pattern);

	bool Update();
	void Free();

	long Count() const;
	const string & operator [] (long n) const;

private:
	string m_sPath;
	string m_sPattern;
	vector<string> m_data;
};

#endif//__DirList_H

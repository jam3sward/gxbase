#ifndef __SharedMem_h
#define __SharedMem_h

//-----------------------------------------------------------------------------

#include <windows.h>

//-----------------------------------------------------------------------------

/**
 * Memory area shared between simulation thread and main program
 */
struct SharedMem {
	float x,y;	///> current (x,y) position of object
	bool  stop;	///> request to terminate thread

	/**
	 * default constructor
	 */
	SharedMem() {
		stop=false;
		x=y=0.0f;
		mutex=CreateMutex(NULL,FALSE,"myMutex");
		assert(mutex!=NULL);
	}

	~SharedMem() {
		CloseHandle(mutex);
	}

	/**
	 * wait for mutex
	 */
	inline bool Acquire() {
		return (WaitForSingleObject(mutex,5000L) == WAIT_OBJECT_0);
	}

	/**
	 * release mutex
	 */
	inline void Release() {
		ReleaseMutex(mutex);
	}

private:
	HANDLE mutex;
};

//-----------------------------------------------------------------------------

#endif//__SharedMem_h

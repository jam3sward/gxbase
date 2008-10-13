#ifndef __world_h
#define __world_h

#include "GXBase.h"
using namespace gxbase;

class World {
public:
	void Draw(glex &g) const {
		// here we can use OpenGL extension functions on 'g',
		// like this one for example:
		g.glPointParameterf(0,0);

		// you wouldn't really create/destroy every frame.. but this
		// is just an example to get something drawn :)
		GLUquadricObj *qObj = gluNewQuadric();
		gluSphere(qObj, 0.5f, 20,20);
		gluDeleteQuadric(qObj);
	}

private:
	// You could store your world data here; eg. objects, scenery etc.
};

#endif//__world_h

#ifndef __mywnd_h
#define __mywnd_h

#include "GXBase.h"
using namespace gxbase;
#include "Model.h"

// JWW 12/12/03 force use of console window in debug mode
#ifdef  _DEBUG
	#pragma comment (linker, "/subsystem:console")
#endif//_DEBUG

class MyWnd :public GLWindow {
public:
	MyWnd();

	void OnCreate();
	void OnDestroy();
	void OnDisplay();
	void OnMouseButton(MouseButton button, bool down);
	void OnMouseMove(int x, int y);
	void OnKeyboard(int key, bool down);
	void OnIdle();

public:
	void FileOpen();

private:
	void DrawNorms();
	void DrawFaces();

private:
	float m_angle;
	float m_mx,m_my;
	float m_ox,m_oy;
	float m_ax,m_ay;
	bool  m_bDrag;
	bool  m_bNorms;
	bool  m_bFaces;
	DrawStyle m_drawStyle;
	DrawStyle m_DSList;

	struct FrameRate {
		FrameRate() :frames(0),rate(0.0f),tstart(0.0f) {}
		void Update(float tnow) {
			if (!frames) {
				tstart = tnow;
				++frames;
			} else {
				float tperiod = tnow-tstart;
				++frames;
				if (tperiod > 1.0f) {
					float hz = (float)frames/tperiod;
					if (rate > 0.0f)
						rate = 0.25f*rate + 0.75f*hz;
					else
						rate = hz;
					frames = 0;
				}
			}
		}
		float Rate() const { return rate; }
	private:
		long  frames;
		float tstart;
		float rate;
	} m_fps;
};

#endif//__mywnd_h

#ifndef _FPSCLASS_H_
#define _FPSCLASS_H_

#pragma  comment(lib,"winmm.lib")

#include <windows.h>
#include <mmsystem.h>
class FpsClass
{
private:
	int m_mfps;
	int m_count;
	unsigned long m_startTime;
public:
	FpsClass();
	FpsClass(const FpsClass &other);
	~FpsClass();

	void Initiazlize();
	void Frame();
	int GetFPS();
};
#endif


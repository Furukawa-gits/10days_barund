#pragma once
#include"DxLib.h"

class Animation
{
public:
	//1�t���[��������̎���
	int singleFrameTime;

	void loadAnimation(const TCHAR filename);

	void setAnimation(int frametime);

	void drawAnimetion();
};

class animationManager
{
public:
	

private:

};
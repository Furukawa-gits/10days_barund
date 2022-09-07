#pragma once
#include"DxLib.h"

class Animation
{
public:
	//1ƒtƒŒ[ƒ€“–‚½‚è‚ÌŠÔ
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
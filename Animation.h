#pragma once
#include"DxLib.h"

class Animation
{
public:
	//1フレーム当たりの時間
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
#pragma once
#include"DxLib.h"
#include<math.h>

enum Mode
{
	arive = 0,
	destroy = 1,
	clash = 2
};

const float PI = 3.14159265f;

class Enemy
{
private:
	//‰æ‘œƒnƒ“ƒhƒ‹
	static int ariveHandle;
	static int destroyHandle;

public:
	FLOAT3 pos;
	FLOAT3 startPos;
	float rotate = 0;

	FLOAT3 clashVec;

	int isMode;

	static void loadGraphs();

	void set();

	void update();

	void ariveUpdate();

	void destroyUpdate();

	void clashUpdate();

	void draw();
};
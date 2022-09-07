#pragma once
#include"DxLib.h"


enum Mode
{
	arive = 0,
	destroy = 1,
	clash = 2
};

const float PI = 3.14159265;

class Enemy
{
private:
	static int ariveHandle;
	static int destroyHandle;

public:
	FLOAT3 pos;
	FLOAT3 startPos;
	float rotate = 0;

	int isMode;

	static void loadGraphs();

	void set();

	void update();

	void ariveUpdate();

	void destroyUpdate();

	void clashUpdate();

	void draw();
};
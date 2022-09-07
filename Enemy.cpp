#include"Enemy.h"
#include<math.h>

int Enemy::ariveHandle = 0;
int Enemy::destroyHandle = 0;

void Enemy::loadGraphs()
{
	ariveHandle = LoadGraph("resource/face.png");
	destroyHandle = LoadGraph("resource/face_fold.png");
}

void Enemy::set()
{
	startPos = { 0,0,0 };
	pos = startPos;
	rotate = 0;
	isMode = arive;
}

void Enemy::update()
{
	ariveUpdate();

	destroyUpdate();

	clashUpdate();
}

void Enemy::ariveUpdate()
{
	if (isMode != arive)
	{
		return;
	}

	rotate += 5.0f;
	pos.x -= 4.0f;
	pos.y = sinf(rotate) * 3.0f + startPos.y;
}

void Enemy::destroyUpdate()
{
	if (isMode != destroy)
	{
		return;
	}

	rotate += 5.0f;
	pos.x -= 3.0f;
	pos.y += 5.5f;
}

void Enemy::clashUpdate()
{
	if (isMode != clash)
	{
		return;
	}

	rotate -= 15.0f;
}

void Enemy::draw()
{
	if (isMode == arive)
	{
		DrawGraph(pos.x - 64, pos.y - 64, ariveHandle, true);
	}
	else
	{
		DrawRotaGraph(pos.x, pos.y, 1.0, rotate * (PI / 180), destroyHandle, true);
	}
}

#pragma once
#include"Enemy.h"

class Player
{
private:
	//画像ハンドル
	static int robotHandle;
	static int handHandle;

public:

	static void loadGraphs();

	void init();

	void update();

	void checkHitEnemy(Enemy* enemy);

	//void checkHitBalloon(Balloon* bal);

	void draw();
};
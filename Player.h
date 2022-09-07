#pragma once
#include"Enemy.h"

class Player
{
private:
	//�摜�n���h��
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
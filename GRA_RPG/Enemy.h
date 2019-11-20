#pragma once
#include "Statistic.h"
#include <string>
class Enemy
{
private:
	Statistic _statistic1;
public:
	Enemy();
	Enemy(std::string name, int hp, int level, int strength, int mana, int force);
	~Enemy();

	void info();
	void killHP();
	int getHP();



	Statistic &getStatistic1();

};


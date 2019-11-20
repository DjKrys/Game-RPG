#include "Enemy.h"



Enemy::Enemy()
{
}

Enemy::Enemy(std::string name, int hp, int level, int strength, int mana, int force)
{
	_statistic1 = Statistic(name, hp, level, strength, mana, force);
}

Enemy::~Enemy()
{
}

void Enemy::info()
{
	_statistic1.info();
}


void Enemy::killHP()
{
	_statistic1.killHP();
}

int Enemy::getHP()
{
	return _statistic1.getHP();
}

Statistic & Enemy::getStatistic1()
{
	return _statistic1;
}

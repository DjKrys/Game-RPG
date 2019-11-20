#pragma once
#include "Statistic.h"
#include "Backpack.h"


class Player
{
private:
	Statistic _statistic;
	Backpack _backpack;

public:
	Player();
	~Player();

	void createPlayer();

	void setLevel(int level);
	void setName(std::string name);
	void setHP(int hp);
	void setStrength(int strength);
	void setMana(int mana);
	void setForce(int force);

	void attack();
	void remove(int i);
	void getStatisticInfo();
	void getBackpackInfo();
	std::string getName();
	
	Statistic &getStatistic();
	Backpack &getBackpack();



};


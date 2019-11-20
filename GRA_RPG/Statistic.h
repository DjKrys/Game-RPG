#pragma once
#include <iostream>
#include <string>

class Statistic
{
private:
	std::string NAME;
	int HP;
	int LEVEL;
	int STRENGTH;
	int MANA;
	int FORCE;

public:
	Statistic();
	Statistic(std::string name, int hp, int level, int strength, int mana, int force);
	~Statistic();
	void info();
	void create();
	void setName(std::string name);
	void setHP(int hp);
	void setLevel(int level);
	void setStrength(int strength);
	void setMana(int mana);
	void setForce(int force);

	std::string getName();
	void killHP();
	int getHP();




};


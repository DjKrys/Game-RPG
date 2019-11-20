#include "Statistic.h"
#include <iostream>
#include "Text.h"

Statistic::Statistic()
{
}

Statistic::Statistic(std::string name, int hp, int level, int strength, int mana, int force)
{
	NAME = name;
	HP = hp;
	LEVEL = level;
	STRENGTH = strength;
	MANA = mana;
	FORCE = force;
}



Statistic::~Statistic()
{
}

void Statistic::info()
{
	std::cout <<"------------------ Nazwa gracza: " << NAME << " HP: " << HP << " LEVEL: " << LEVEL << " STRENGTH: " << STRENGTH << " MANA: " << MANA << " FORCE: " << FORCE << "----------------" <<std::endl;
}

void Statistic::create()
{
	std::string name;
	int hp;
	int level;
	int strength;
	int mana;
	int force;

	Text::getText().print("name");
	std::cin >> name;
	NAME = name;
	Text::getText().print("hp");
	std::cin >> hp;
	HP = hp;
	Text::getText().print("level");
	std::cin >> level;
	LEVEL = level;
	Text::getText().print("strength");
	std::cin >> strength;
	STRENGTH = strength;
	Text::getText().print("mana");
	std::cin >> mana;
	MANA = mana;
	Text::getText().print("force");
	std::cin >> force;
	FORCE = force;
	std::cout << std::endl;
}

void Statistic::setName(std::string name)
{
	NAME = name;
}

void Statistic::setHP(int hp)
{
	HP = hp;
}

void Statistic::setLevel(int level)
{
	LEVEL = level;
}

void Statistic::setStrength(int strength)
{
	STRENGTH = strength;
}

void Statistic::setMana(int mana)
{
	MANA = mana;
}

void Statistic::setForce(int force)
{
	FORCE = force;
}

std::string Statistic::getName()
{
	return NAME;
}

void Statistic::killHP()
{
	HP -= 1;
}

int Statistic::getHP()
{
	return HP;
}



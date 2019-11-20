#include "Player.h"


Player::Player() : _backpack(10)
{
}

Player::~Player()
{
}

void Player::createPlayer()
{
	_statistic.create();
}

void Player::setLevel(int level)
{
	_statistic.setLevel(level);
}

void Player::setName(std::string name)
{
	_statistic.setName(name);
}

void Player::setHP(int hp)
{
	_statistic.setHP(hp);
}

void Player::setStrength(int strength)
{
	_statistic.setStrength(strength);
}

void Player::setMana(int mana)
{
	_statistic.setMana(mana);
}

void Player::setForce(int force)
{
	_statistic.setForce(force);
}

void Player::attack()
{
}

void Player::remove(int i)
{
	_backpack.removeItem(i);
}

void Player::getStatisticInfo()
{
	return _statistic.info();
}

void Player::getBackpackInfo()
{
	return _backpack.info();
}

std::string Player::getName()
{
	return _statistic.getName();
}

Statistic & Player::getStatistic()
{
	return _statistic;
}

Backpack & Player::getBackpack()
{
	return _backpack;
}


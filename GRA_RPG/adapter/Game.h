#pragma once
#include <iostream>
#include "Player.h"
#include "LocationMachine.h"
#include "Place.h"
#include "Enemy.h"
#include <map>
#include <string>
#include <memory>
#include "file_Handle.h"
#include "item_Handle.h"

class Game
{
private:
	Game();
	Game(const Game &);
	~Game();

	Player _player;
	LocationMachine _locationMachine;
	Option _option;
	Location _location;
	Enemy _enemy;
	std::vector <Enemy> _enemies;
	bool _gameOver = false;
	std::map < std::string, int > _settings;
public:
	static Game &getGame();

	LocationMachine &getLocationMachine();

	void play();
	void menu();
	bool getgameOver();
	void update();

	Player &getPlayer();
	Option getOption();
	Enemy &getEnemy();
	Location getLocation();
};


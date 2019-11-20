#include "Game.h"
#include "Text.h"
#include <vector>
#include <iostream>



Game::Game()
{
	_gameOver = false;
	_option = Option::Travel;

	_enemies.push_back(Enemy("Szczur", 3, 1, 1, 1, 1));
	_enemies.push_back(Enemy("Waz", 5, 1, 1, 1, 1));
	_enemies.push_back(Enemy("Mrowka", 1, 1, 1, 1, 1));
}

Game::~Game()
{
}

void Game::menu()
{
	Text::getText().print("logo");
	std::cout << std::endl;
	Text::getText().print("menu");

	int wybor;
	std::cin >> wybor;
	system("cls");
	switch (wybor)
	{
		case 1:
			Player();
			_player.createPlayer();
			Text::getText().print("welcome");
			play();
			break;
		case 2:
			update();
			break;
		case 3:
			_gameOver = 1;
			break;
	}
}

bool Game::getgameOver()
{
	return _gameOver;
}

void Game::update()
{
	file_Handle Settings(file_Handle::FileType::XML);
	_settings = Settings.Load_Settings();
	file_Handle Settings1(file_Handle::FileType::TXT);
	_settings = Settings1.Load_Settings();
	_player.setHP(_settings["hp"]);
	_player.setLevel(_settings["level"]);
	_player.setStrength(_settings["strength"]);
	_player.setMana(_settings["mana"]);
	_player.setForce(_settings["force"]);

	std::string name;
	Text::getText().print("name");
	std::cin >> name;
	_player.setName(name);
	play();
}

Player & Game::getPlayer()
{
	return _player;
}

Option Game::getOption()
{
	return Option();
}

Enemy & Game::getEnemy()
{
	return _enemy;
}

Location Game::getLocation()
{
	return Location();
}

Game &Game::getGame()
{
	static Game game;
	return game;
}

LocationMachine & Game::getLocationMachine()
{
	return _locationMachine;
}

void Game::play()
{
	while (!_gameOver)
	{
		char tmp;
		int i;
		switch (_option)
		{
		case Option::Travel:
			_player.getStatisticInfo();
			Text::getText().print("management");
			_locationMachine.info();
			_locationMachine.locationNet();

			std::cin >> tmp;
			if (tmp == 'p')
			{
				_option = Option::Action;
				system("cls");
			}
			else
			{
				_locationMachine.travel((int)tmp - 48);
				system("cls");
			}
			break;

		case Option::Action:
			_player.getStatisticInfo();
			Text::getText().print("action");
			std::cin >> tmp;
			system("cls");

			if (tmp == 'b')
			{
				_player.getBackpackInfo();
				Text::getText().print("bag");
				std::cin >> tmp;
				if (tmp == 't')
				{
					_option = Option::Travel;
					system("cls");
				}
				else if (tmp == 'd')
				{
					Text::getText().print("select");
					std::cin >> i;
					_player.remove(i-1);
				}
			}
			else if (tmp == 't')
			{
				_option = Option::Travel;
				system("cls");
			}
			else if (tmp == 'f')
			{
				Text::getText().print("arena");
				_option = Option::Fight;
			}
			else if (tmp == 'g')
			{
				if (_location == Bedroom)
				{
					Game::getGame().getPlayer().getBackpack().addItem(Item("Gazeta", 1, 0));
					item_Handle Papper(item_Handle::FileType::GAZETA);
					Papper.info();
				}
				if (_location == Kitchen)
				{
					Game::getGame().getPlayer().getBackpack().addItem(Item("Noz", 1, 10));
					item_Handle Knife(item_Handle::FileType::NOZ);
					Knife.info();
				}
			}
			else if (tmp == 's')
			{
				_player.getBackpack().sort();
			}
			break;
		case Option::Fight:

			char motion;
			Text::getText().print("atack");

			std::cin >> motion;

			if (motion == 'a')
			{
				if (_location == Bedroom)
				{
					_enemies[0].killHP();
					if (_enemies[0].getHP() == 0)
					{
						Text::getText().print("win");
						Game::getGame().getPlayer().getBackpack().addItem(Item("Pieniadze z walki", 0, 100));
						_option = Option::Travel;
					}
				}

				if (_location == Kitchen)
				{
					_enemies[1].killHP();
					if (_enemies[1].getHP() == 0)
					{
						Text::getText().print("win");
						Game::getGame().getPlayer().getBackpack().addItem(Item("Pieniadze z walki", 0, 100));
						_option = Option::Travel;
					}
				}
			}
			break;
		}
	}
}



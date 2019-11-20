#include <iostream>
#include <string>
#include "Game.h"
#include "Place.h"

int main()
{
	while (!Game::getGame().getgameOver())
	{
		Game::getGame().menu();
	}


	system("pause");
}
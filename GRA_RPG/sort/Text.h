#pragma once

#include <map>
#include <vector>
#include <string>
#include <iostream>
#include "Player.h"
class Text
{
private:
	Text();
	Text(const Text &);
	~Text();

	Player* _player;

	std::map < std::string, std::vector < std::string > > _txt;
public:
	static Text &getText();

	void print(std::string a);
	std::map < std::string, std::vector < std::string> > &getTxt();


};


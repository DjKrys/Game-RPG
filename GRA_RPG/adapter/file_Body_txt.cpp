#include "file_Body_txt.h"
#include <fstream>
#include <iostream>


std::map<std::string, int> file_Body_txt::Load_Settings()
{
	std::map< std::string, int> settings;
	std::fstream file;
	file.open("SettingsFile.txt", std::ios::in);

	std::string line;

	while (getline(file, line))
	{
		char key;
		key = line[0];

		if (key == 'h')
		{

			int x = (line[10] - '0') * 100 + (line[11] - '0') * 10 + line[12] - '0';
			settings.insert(std::make_pair("hp", x));
		}

		if (key == 'l')
		{

			int x = (line[10] - '0') * 100 + (line[11] - '0') * 10 + line[12] - '0';
			settings.insert(std::make_pair("level", x));
		}

		if (key == 't')
		{

			int x = (line[10] - '0') * 100 + (line[11] - '0') * 10 + line[12] - '0';
			settings.insert(std::make_pair("strength", x));
		}

		if (key == 'm')
		{

			int x = (line[10] - '0') * 100 + (line[11] - '0') * 10 + line[12] - '0';
			settings.insert(std::make_pair("mana", x));
		}

		if (key == 'f')
		{

			int x = (line[10] - '0') * 100 + (line[11] - '0') * 10 + line[12] - '0';
			settings.insert(std::make_pair("force", x));
		}
	}
	file.close();
	return settings;
}
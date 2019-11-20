#pragma once
#include <iostream>
#include <string>

class Item
{
private:
	std::string _name;
	int _weight;
	int _value;
public:
	Item();
	Item(std::string name, int weight, int value);
	~Item();

	std::string getName();
	int getWeight();
	int getValue();
	void info();

};


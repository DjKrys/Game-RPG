#include "Item.h"

Item::Item()
{
}

Item::Item(std::string name, int weight, int value)
{
	_name = name;
	_weight = weight;
	_value = value;
}

Item::~Item()
{
}

std::string Item::getName()
{
	return _name;
}

int Item::getWeight()
{
	return _weight;
}

int Item::getValue()
{
	return _value;
}

void Item::info()
{
	std::cout << _name << "	    " << _weight << "	   " << _value << std::endl;
}

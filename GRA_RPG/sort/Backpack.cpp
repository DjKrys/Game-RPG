#include "Backpack.h"
#include "Text.h"
Backpack::Backpack()
{

}

Backpack::Backpack(int maxCapacity = 10)
{
	_maxCapacity = maxCapacity;
	_capacity = 0;
}


Backpack::~Backpack()
{
}

void Backpack::info()
{
	Text::getText().print("info_backpack");
	if (_item.size() > 0)
	{
		Text::getText().print("info_backpack1");
		for (int i = 0; i < _item.size(); i++)
			_item[i].info();
	}
}

void Backpack::sort()
{
	std::sort()
}

void Backpack::addItem(Item item)
{
	if (_capacity + item.getWeight() <= _maxCapacity)
	{
		_capacity += item.getWeight();
		_item.push_back(item);
	}
}

void Backpack::removeItem(int i)
{
	if (_item.size() != 0)
	{
		_capacity -= _item[i].getWeight();
		_item.erase(_item.begin() + i);
	}
	Text::getText().print("delete");
}

std::vector<Item>& Backpack::getItem()
{
	return _item;
}

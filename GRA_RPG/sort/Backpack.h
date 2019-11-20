#pragma once
#include <iostream>
#include <vector>
#include "Item.h"

class Backpack
{
private:
	int _capacity;
	int _maxCapacity;
	std::vector < Item > _item;
public:
	Backpack();
	Backpack(int maxCapacity);
	~Backpack();
	
	void info();
	void sort();
	void addItem(Item item);
	void removeItem(int i);

	std::vector < Item > &getItem();


};


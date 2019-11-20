#pragma once
#include <iostream>
#include <vector>
#include "Item.h"
#include "sort_Handle.h"

class Backpack
{
private:
	int _capacity;
	int _maxCapacity;
	std::vector < Item > _item;
	sort_Handle *_comp;
	
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


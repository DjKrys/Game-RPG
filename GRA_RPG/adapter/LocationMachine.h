#pragma once
#include "Place.h"


class LocationMachine
{
private:
	Location _location;
	Option _option;

public:
	LocationMachine();
	~LocationMachine();

	Location getLocation();
	Option getOption();

	void info();
	void locationNet();
	void travel(int tmp);
};


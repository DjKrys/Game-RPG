#include <iostream>
#include "Game.h"
#include "Text.h"

LocationMachine::LocationMachine()
{
	_location = Location::Corridor;
}

LocationMachine::~LocationMachine()
{
}

Location LocationMachine::getLocation()
{
	return Location();
}

Option LocationMachine::getOption()
{
	return Option();
}

void LocationMachine::info()
{
	switch (_location)
	{
	case Location::Bedroom:
		Text::getText().print("bedroom");
		break;

	case Location::Kitchen:
		Text::getText().print("kitchen");
		break;

	case Location::Garage:
		Text::getText().print("garage");
		break;
	}
}

void LocationMachine::locationNet()
{
	switch (_location)
	{
	case Location::Corridor:
		Text::getText().print("corridor_travel");
		break;
	case Location::Bedroom:
		Text::getText().print("bedroom_travel");
		break;

	case Location::Kitchen:
		Text::getText().print("kitchen_travel");
		break;

	case Location::Garage:
		Text::getText().print("garage_travel");
		break;
	}
}

void LocationMachine::travel(int tmp)
{
	switch (_location)
	{
	case Location::Corridor:
		if (tmp == 1) _location = Location::Kitchen;
		if (tmp == 2) _location = Location::Garage;
		if (tmp == 3) _location = Location::Bedroom;
		break;

	case Location::Bedroom:
		if (tmp == 1) _location = Location::Kitchen;
		if (tmp == 2) _location = Location::Garage;
		break;

	case Location::Kitchen:
		if (tmp == 1) _location = Location::Bedroom;
		if (tmp == 2) _location = Location::Garage;
		break;

	case Location::Garage:
		if (tmp == 1) _location = Location::Kitchen;
		if (tmp == 2) _location = Location::Bedroom;
		break;
	}
}

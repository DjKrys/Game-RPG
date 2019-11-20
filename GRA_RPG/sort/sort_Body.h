#pragma once
#include "Item.h"
#include <vector>

class sort_Body
{
public:
	virtual bool operator()(Item i1, Item i2) = 0;

	virtual ~sort_Body() = default;
};
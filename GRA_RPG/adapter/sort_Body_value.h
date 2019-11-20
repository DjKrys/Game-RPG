#pragma once
#include "Item.h"
#include "sort_Body.h"

class sort_Body_value : public sort_Body
{
public:
	virtual bool operator() (Item i1, Item i2) override;
};


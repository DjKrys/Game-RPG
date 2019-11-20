#pragma once

#include "Item.h"
#include "NPC.h"

class adapter_item_NPC : public NPC, public Item
{
public:
	adapter_item_NPC(std::string name, int hp);

	virtual void info();
};


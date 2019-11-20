#include "adapter_item_NPC.h"



adapter_item_NPC::adapter_item_NPC(std::string name, int value, int hp): Item (name, value, hp)
{

}

void adapter_item_NPC::info()
{
	std::cout << "Name: " << this->getName() << "Value: " << this->getValue() << "Hp: " << this->getWeight() << std::endl;
}

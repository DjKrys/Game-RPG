#include "sort_Body_weight.h"

bool sort_Body_weight::operator()(Item i1, Item i2)
{
	if (i1.getWeight() < i2.getWeight())
		return true;
	else
	return false;
}

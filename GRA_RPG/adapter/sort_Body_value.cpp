#include "sort_Body_value.h"

bool sort_Body_value::operator()(Item i1, Item i2)
{
	if (i1.getValue() < i2.getValue())
		return true;
	else
	return false;
}

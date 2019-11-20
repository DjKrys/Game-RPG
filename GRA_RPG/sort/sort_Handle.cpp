#include "sort_Handle.h"

sort_Handle::sort_Handle(FileType type)
{
	switch (type)
	{
	case FileType::WEIGHT:
		fBodyObj = std::make_unique <sort_Body_weight>();
		break;

	case FileType::VALUE:
		fBodyObj = std::make_unique <sort_Body_value>();
		break;

	default:
		break;
	}
}

bool sort_Handle::operator()(Item i1, Item i2)
{
	return fBodyObj->operator()(i1, i2);
}


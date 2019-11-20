#include "item_Handle.h"


item_Handle::item_Handle(FileType type)
{
	switch (type)
	{
	case FileType::NOZ:
		fBodyObj = std::make_unique <item_Body_noz>();

		break;

	case FileType::GAZETA:
		fBodyObj = std::make_unique <item_Body_gazeta>();
		break;

	default:
		break;
	}
}

void item_Handle::info()
{
	return fBodyObj->info();
}




#include "file_Handle.h"

file_Handle::file_Handle(FileType type)
{
	switch (type)
	{
	case FileType::TXT:
		fBodyObj = std::make_unique <file_Body_txt>();

		break;

	case FileType::XML:
		fBodyObj = std::make_unique <file_Body_XML>();
		break;

	default:
		break;
	}
}

std::map<std::string, int> file_Handle::Load_Settings()
{
	return fBodyObj->Load_Settings();
}

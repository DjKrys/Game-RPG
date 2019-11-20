#pragma once

#include <memory>
#include <map>
#include "file_Body.h"
#include "file_Body_txt.h"
#include "file_Body_XML.h"

class file_Handle
{
private:
	using BodyPtr = std::unique_ptr <file_Body>;

	BodyPtr fBodyObj;

public:
	enum class FileType
	{	
		TXT, 
		XML,
	};

	file_Handle(FileType type);
	virtual std::map< std::string, int> Load_Settings();

	virtual ~file_Handle() = default;

};


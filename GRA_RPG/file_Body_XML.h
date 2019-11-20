#pragma once

#include <string>
#include "file_Body.h"
#include "Text.h"


class file_Body_XML : public file_Body
{
public:
	virtual std::map< std::string, int>  Load_Settings() override;
};


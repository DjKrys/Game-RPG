#pragma once

#include <string>
#include "file_Body.h"
#include <vector>


class file_Body_txt : public file_Body
{
public:
	virtual std::map< std::string, int> Load_Settings() override;
};


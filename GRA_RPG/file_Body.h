#pragma once

#include <map>
#include <string>
#include <vector>

class file_Body
{
public:
	virtual std::map< std::string, int>  Load_Settings() = 0;

	virtual ~file_Body() = default;
};


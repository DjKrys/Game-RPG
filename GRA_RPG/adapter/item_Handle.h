#pragma once
#include <memory>
#include "item_Body.h"
#include "item_Body_noz.h"
#include "item_Body_gazeta.h"

class item_Handle
{
private:
	using BodyPtr = std::unique_ptr <item_Body>;

	BodyPtr fBodyObj;

public:
	enum class FileType
	{
		NOZ,
		GAZETA,
	};

	item_Handle(FileType type);
	void info();

	virtual ~item_Handle() = default;

};


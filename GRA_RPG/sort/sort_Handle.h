#pragma once
#include "Item.h"
#include "sort_Body.h"
#include "sort_Body_weight.h"
#include "sort_Body_value.h"

class sort_Handle
{
private:
	using BodyPtr = std::unique_ptr <sort_Body>;

	BodyPtr fBodyObj;
public:
	enum class FileType
	{
		WEIGHT,
		VALUE,
	};

	sort_Handle(FileType type);
	virtual bool operator()(Item i1, Item i2);

	virtual ~sort_Handle() = default;
};


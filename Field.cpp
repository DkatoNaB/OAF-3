#include <utility>

#include "Field.h"


Field::Field()
{
	
}

int Field::fieldsTypeAsInt(Field::fields f) const noexcept
{
	return static_cast<int>(f);
}

const std::string& fieldsTypeAsSTR(Field::fields f)
{
	switch(f)
	{
		case Field::fields::REALESTATE:
			return std::forward<std::string>("realestate");
			break;
		case Field::fields::SERVICE:
			return std::forward<std::string>"service";
			break;
		case Field::fields::LUCK:
			return std::forward<std::string>"lucky";
			break;
		default:
			return std::forward<std::string>"smt went wrong!";
	}
	
}
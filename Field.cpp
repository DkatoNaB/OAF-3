#include <ostream>

#include "Field.h"


Field::Field()
{
	
}

int Field::fieldsTypeAsInt(Field::fields f) const noexcept
{
	return static_cast<int>(f);
}

std::ostream& operator<<(std::ostream& os, Field::fields f)
{
	switch(f)
	{
		case Field::fields::REALESTATE:
		{
			os << "REALESTATE";
			return os;
			
		}
		case Field::fields::SERVICE:
		{	
			os << "SERVICE";
			return os;
			
		}
		case Field::fields::LUCK:
		{
			os << "LUCK";
			return os;
		}
			
		default:
		{
			os << "field::operator<<('WHOOPS')";
			return os;
		}
	}
	
}
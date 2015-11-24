#include "LuckField.h"

LuckField::LuckField() //: Field()
{
	std::cout<< "LuckField() called..." << std::endl;
}

LuckField::LuckField(std::string& owner, int value) 
	//: Field(owner)
	: _owner(owner)
	, _value(value)
{
	std::cout << "LuckField(str,int) called..." << std::endl;
}

LuckField::~LuckField()
{
	std::cout << "~LuckField() called..." << std::endl;
}


bool LuckField::isStepped() 
{
	return true;
}

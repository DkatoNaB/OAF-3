#include "LuckField.h"

LuckField::LuckField()
{
	std::cout<< "LuckField() called..." << std::endl;
}

LuckField::LuckField(int value) 
	//: _owner(owner)
	: _value(value)
	//, _step(false)
{
    //++Field::_number;
    /*<< Field::_number << ")*/
	std::cout << "LuckField(int)  called..." << std::endl;
}

LuckField::~LuckField()
{
	std::cout << "~LuckField() called..." << std::endl;
}

void LuckField::info()
{
	std::cout <<"LuckField" << std::endl;
}


/*
bool LuckField::isStepped() 
{
	return _step;
}

void LuckField::step()
{
	if(_step)
		_step = false;
	else
		_step = true;
}
*/

/*int main()
{
	return 0;
}*/
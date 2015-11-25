#include "RealEstateField.h"

RealEstateField::RealEstateField()
{
	std::cout<< "RealEstateField() called..." << std::endl;
}

RealEstateField::RealEstateField(int value) 
	: _value(value)
{
	std::cout << "RealEstateField(int)  called..." << std::endl;
}

RealEstateField::~RealEstateField()
{
	std::cout << "~RealEstateField() called..." << std::endl;
}

void RealEstateField::info()
{
	std::cout <<"RealEstateField" << std::endl;
}


/*int main()
{
	return 0;
}*/
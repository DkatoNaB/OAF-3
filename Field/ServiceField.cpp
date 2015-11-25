#include "ServiceField.h"

ServiceField::ServiceField()
{
	std::cout<< "ServiceField() called..." << std::endl;
}

ServiceField::ServiceField(int value) 
	: _value(value)

{
	std::cout << "ServiceField(int)  called..." << std::endl;
}

ServiceField::~ServiceField()
{
	std::cout << "~ServiceField() called..." << std::endl;
}

void ServiceField::info()
{
	std::cout <<"ServiceField" << std::endl;
}


/*int main()
{
	return 0;
}*/
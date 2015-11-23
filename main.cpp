#include <iostream>

#include "Field.h"
int main()
{
	Field f;
	const int a = f.fieldsTypeAsInt(Field::fields::SERVICE);
	std::cout << a << std::endl;
	std::cout << "string: " << Field::fields::LUCK << std::endl;
	std::cout << "kek!"<< std::endl;
	return 0;
}
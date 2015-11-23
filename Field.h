#ifndef FIELD_H
#define FIELD_H

#include <iostream>

class Field
{
public:
	Field();
	~Field() = default;
	Field(const Field&) = default;
	Field& operator=(const Field&) = default;
	
	enum class fields
	{
		 REALESTATE = 1
		,SERVICE = 2
		,LUCK = 3
	};
	
	int fieldsTypeAsInt(Field::fields f) const noexcept;
	const std::string& fieldsTypeAsSTR(Field::fields f) const;
	
};

#endif //FIELD_H
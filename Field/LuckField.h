#ifndef LUCK_H
#define LUCK_H

#include "Field.h"

class LuckField : public Field
{
public:
	LuckField();
	LuckField(std::string&,int);
	virtual ~LuckField();
	bool isStepped();
private:
	std::string _owner;
	int _value;
};

#endif //LUCK_H
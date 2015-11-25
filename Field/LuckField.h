#ifndef LUCK_H
#define LUCK_H

#include "Field.h"

class LuckField : public Field
{
public:
	LuckField();
	explicit LuckField(int);
	virtual ~LuckField();
	void info() override;
private:
	int _value;
};

#endif //LUCK_H
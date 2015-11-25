#ifndef REALESTATE_H
#define REALESTATE_H

#include "Field.h"

class RealEstateField : public Field
{
public:
	RealEstateField();
	explicit RealEstateField(int);
	virtual ~RealEstateField();
	void info() override;
	//int fieldNumber() override;
private:
	int _value;
};

#endif //REALESTATE_H
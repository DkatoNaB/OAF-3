#ifndef SERVICE_H
#define SERVICE_H

#include "Field.h"

class ServiceField : public Field
{
public:
	ServiceField();
	explicit ServiceField(int);
	virtual ~ServiceField();
	void info() override;
private:
	int _value;
};

#endif //SERVICE_H
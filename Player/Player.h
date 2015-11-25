#ifndef PLAYER_H
#define PLAYER_H

#include <map>
#include "../Field/Field.h"

class Player
{
public:
	virtual ~Player() = default;
	virtual bool buy() = 0;
	virtual bool pay() = 0;
	virtual void info() = 0;
	virtual void showOwnedFields() = 0;
	virtual void build() = 0;
	virtual int fieldNumber() = 0;
protected:
	Player() = default;
};

#endif //PLAYER_H

/*
*	showOwnedFields() -> print fields owned by player
*
*	fieldNumber() -> which field the player is on
*
*	
*
*
*
*
*
*/
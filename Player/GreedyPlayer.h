#ifndef GREEDYPLAYER_H
#define GREEDYPLAYER_H

#include "Player.h"

class GreedyPlayer
{
public:
	GreedyPlayer() = default;
	~GreedyPlayer() = default;
	virtual bool buy();
	virtual bool pay();
	virtual void info();
	virtual void showOwnedFields();
	virtual void build();
	virtual int fieldNumber();
private:
	std::map<int,Field*> fields;
};

#endif //GREEDYPLAYER_H

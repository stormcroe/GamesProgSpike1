#pragma once
#include "identifiableObject.h"
#include "player.h"
#include "world.h"
#include "blackBoard.h"
#include "boardMessage.h"

class command : public identifiableObject
{
public:
	command();
	virtual void execute(player* mainPlayer, world* mainWorld, vector<string> text) = 0;
	~command();
};


#pragma once
#include "lookCommand.h"
#include "moveCommand.h"

class commandProcessing
{
private:
	lookCommand* look;
	moveCommand* move;

public:
	commandProcessing();
	void run(player* aPlayer, world* aWorld, vector<string> playerInput);
	~commandProcessing();
};


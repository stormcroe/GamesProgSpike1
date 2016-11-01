#pragma once
#include "lookCommand.h"
#include "moveCommand.h"
#include "pickUpCommand.h"
#include "putDownCommand.h"
#include "sharpenCommand.h"

class commandProcessing
{
private:
	lookCommand* look;
	moveCommand* move;
	pickUpCommand* up;
	putDownCommand* down;
	sharpenCommand* sharpen;

public:
	commandProcessing();
	void run(player* aPlayer, world* aWorld, vector<string> playerInput);
	~commandProcessing();
};


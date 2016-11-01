#pragma once
#include "gameState.h"
#include "player.h"
#include "location.h"
#include "item.h"
#include "world.h"
#include "path.h"
#include "command.h"
#include "commandProcessing.h"
#include  <vector>



class gamePlay :
	public gameState
{
private:
	player* playerOne;
	bool playOnce;
	bool mapRead;
	world* mainWorld;
	commandProcessing * commandProcesser;

public:
	gamePlay();
	~gamePlay();
	void setUpGame();
	void draw();
	void handleInput(stateManager*);
};


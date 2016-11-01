#pragma once
#include "gameState.h"

class gamePlay :
	public gameState
{
public:
	gamePlay();
	~gamePlay();

	void draw();
	void handleInput(stateManager*);
};


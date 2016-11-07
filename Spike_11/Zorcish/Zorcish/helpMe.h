#pragma once
#include "gameState.h"

class helpMe :
	public gameState
{
public:
	helpMe();
	~helpMe();

	void draw();
	void handleInput(stateManager*);
};


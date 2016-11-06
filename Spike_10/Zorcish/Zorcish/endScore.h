#pragma once
#include "gameState.h"

class endScore :
	public gameState
{
public:
	endScore();
	~endScore();

	void draw();
	void handleInput(stateManager*);
};


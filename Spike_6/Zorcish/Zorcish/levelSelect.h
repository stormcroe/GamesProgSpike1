#pragma once
#include "gameState.h"
class levelSelect :
	public gameState
{
public:
	levelSelect();
	~levelSelect();

	void draw();
	void handleInput(stateManager*);
};


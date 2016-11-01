#pragma once
#include "gameState.h"

class hiScores :
	public gameState
{
public:
	hiScores();
	~hiScores();

	void draw();
	void handleInput(stateManager*);
};


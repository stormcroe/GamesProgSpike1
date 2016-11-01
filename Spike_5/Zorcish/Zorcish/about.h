#pragma once
#include "gameState.h"
class about :
	public gameState
{
public:
	about();
	~about();

	void draw();
	void handleInput(stateManager*);
};

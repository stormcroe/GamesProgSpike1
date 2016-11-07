#pragma once
#include "gameState.h"

class mainMenu :
	public gameState
{
public:
	mainMenu();
	~mainMenu();

	void draw();
	void handleInput(stateManager*);
};
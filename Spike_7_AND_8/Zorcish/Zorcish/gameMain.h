#pragma once
#include "stateManager.h"
#include <string>


class gameMain
{
	std::string gameState;
	bool gameRunning;
public:
	gameMain();
	~gameMain();

	void gameLoop();

private:
	stateManager aStateManager;
};


#include "stdafx.h"
#include "gameMain.h"
#include <stdio.h>
#include <iostream>

using namespace std;

gameMain::gameMain()
{
	gameRunning = true;
	aStateManager.draw();
	gameLoop();
}


gameMain::~gameMain()
{
}

void gameMain::gameLoop()
{
	while (gameRunning)
	{
		aStateManager.handleInput();
		aStateManager.draw();
	}
}
#pragma once
#include <iostream>
#include <string>
#include "about.h"
#include "mainMenu.h"
#include "gameState.h"
#include "gamePlay.h"
#include "endScore.h"
#include "hiScores.h"
#include "helpMe.h"
#include "levelSelect.h"

class stateManager
{
public:
	stateManager();
	stateManager(bool* gameRun);
	~stateManager();

	void draw();
	void handleInput();
	void changeState(std::string);
	void setGameRunning(bool* gameRun);
	bool getGameRunning();

private:
	bool* gameRunning;
	gameState* currentState;
	mainMenu aMenu;
	about aAbout;
	gamePlay aGame;
	endScore aEnd;
	hiScores aScoreboard;
	helpMe aHelper;
	levelSelect aLevel;
};
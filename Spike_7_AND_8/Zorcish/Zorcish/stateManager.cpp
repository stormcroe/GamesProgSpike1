#include "stdafx.h"
#include "stateManager.h"
#include "about.h"
#include "mainMenu.h"
#include "gameState.h"
#include <string>


using namespace std;

stateManager::stateManager()
{
	currentState = &aMenu;
}

stateManager::stateManager(bool * gameRun)
{
	currentState = &aMenu;
	gameRunning = gameRun;
}

void stateManager::draw()
{
	currentState->draw();
}

void stateManager::handleInput()
{
	currentState->handleInput(this);
}

void stateManager::changeState(string userInput)
{
	transform(userInput.begin(), userInput.end(), userInput.begin(), toupper);
	if (userInput == "A")
	{
		currentState = &aAbout;
	}

	else if (userInput == "M")
	{
		currentState = &aMenu;
	}

	else if (userInput == "G")
	{
		currentState = &aGame;
	}

	else if (userInput == "E")
	{
		currentState = &aEnd;
	}

	else if (userInput == "S")
	{
		currentState = &aScoreboard;
	}

	else if (userInput == "H")
	{
		currentState = &aHelper;
	}

	else if (userInput == "L")
	{
		currentState = &aLevel;
	}
	else if (userInput == "Q") {
		gameRunning = false;
	}

}

void stateManager::setGameRunning(bool* gameRun)
{
	gameRunning = gameRun;
}

bool stateManager::getGameRunning()
{
	return gameRunning;
}

stateManager::~stateManager()
{
}

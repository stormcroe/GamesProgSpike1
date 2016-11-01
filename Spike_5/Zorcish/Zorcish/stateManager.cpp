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
}

stateManager::~stateManager()
{
}

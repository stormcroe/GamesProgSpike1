#include "stdafx.h"
#include "mainMenu.h"
#include <iostream>
#include <string>
#include "stateManager.h"

using namespace std;

mainMenu::mainMenu()
{
}


mainMenu::~mainMenu()
{
}

void mainMenu::draw()
{
	cout << "This is the Main Menu!" << endl;
	cout << "To check the About, enter <A>." << endl;
	cout << "To start your adventure, enter <L>." << endl;
	cout << "To view High Scores, enter <S>." << endl;
	cout << "To get some Help, enter <H>." << endl;
}

void mainMenu::handleInput(stateManager* aStateManager)
{
	string userInput;
	cin >> userInput;
	if (userInput == "A") //go to about
	{
		aStateManager->changeState(userInput);
	}

	if (userInput == "L") //go to level select
	{
		aStateManager->changeState(userInput);
	}

	if (userInput == "S") //go to hiscores
	{
		aStateManager->changeState(userInput);
	}

	if (userInput == "H") //go to help
	{
		aStateManager->changeState(userInput);
	}
}

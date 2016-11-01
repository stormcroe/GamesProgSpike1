#include "stdafx.h"
#include "gamePlay.h"
#include <iostream>
#include <string>
#include "stateManager.h"

using namespace std;

gamePlay::gamePlay()
{
}


gamePlay::~gamePlay()
{
}

void gamePlay::draw()
{
	cout << "This is the Game! Check out all this innovative gameplay!" << endl;
	cout << "To return to the Main Menu, enter <M>." << endl;
	cout << "To end the game and see your score, enter <E>." << endl;
}

void gamePlay::handleInput(stateManager* aStateManager)
{
	string userInput;
	cin >> userInput;
	if (userInput == "M") //go to menu
	{
		aStateManager->changeState(userInput);
	}

	if (userInput == "E") //go to end score
	{
		aStateManager->changeState(userInput);
	}
}

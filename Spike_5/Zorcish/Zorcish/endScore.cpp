#include "stdafx.h"
#include "endScore.h"
#include <iostream>
#include <string>
#include "stateManager.h"

using namespace std;

endScore::endScore()
{
}


endScore::~endScore()
{
}

void endScore::draw()
{
	cout << "You died and/or won! 9,000,000 points!" << endl;
	cout << "To go back to the Main Menu, enter <M>." << endl;
	cout << "To see everyone's High Scores, enter <S>." << endl;
}

void endScore::handleInput(stateManager* aStateManager)
{
	string userInput;
	cin >> userInput;
	if (userInput == "M") //go to menu
	{
		aStateManager->changeState(userInput);
	}
	if (userInput == "S") //go to high scores
	{
		aStateManager->changeState(userInput);
	}
}

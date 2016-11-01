#include "stdafx.h"
#include "hiScores.h"
#include <iostream>
#include <string>
#include "stateManager.h"

using namespace std;

hiScores::hiScores()
{
}


hiScores::~hiScores()
{
}

void hiScores::draw()
{
	cout << "Here is the High Scores list!" << endl;
	cout << "To go back to the Main Menu, enter <M>." << endl;
}

void hiScores::handleInput(stateManager* aStateManager)
{
	string userInput;
	cin >> userInput;
	if (userInput == "M") //go to menu
	{
		aStateManager->changeState(userInput);
	}
}
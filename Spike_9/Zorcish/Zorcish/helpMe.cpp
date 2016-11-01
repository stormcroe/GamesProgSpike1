#include "stdafx.h"
#include "helpMe.h"
#include <iostream>
#include <string>
#include "stateManager.h"

using namespace std;

helpMe::helpMe()
{
}


helpMe::~helpMe()
{
}

void helpMe::draw()
{
	cout << "You wanted help? HA! Hey guys, come check out this loser who needs HELP!!!" << endl;
	cout << "To go back to the Main Menu, enter <M>." << endl;
}

void helpMe::handleInput(stateManager* aStateManager)
{
	string userInput;
	cin >> userInput;
	transform(userInput.begin(), userInput.end(), userInput.begin(), toupper);

	if (userInput == "M") //go to menu
	{
		aStateManager->changeState(userInput);
	}
}
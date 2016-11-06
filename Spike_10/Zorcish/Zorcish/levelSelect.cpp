#include "stdafx.h"
#include "levelSelect.h"
#include <iostream>
#include <string>
#include "stateManager.h"

using namespace std;

levelSelect::levelSelect()
{
}


levelSelect::~levelSelect()
{
}

void levelSelect::draw()
{
	cout << "Are you ready to go on an adventure?" << endl;
	cout << "Press <G> to start!" << endl;
	cout << "Press <M> to return to the Main Menu." << endl;
}

void levelSelect::handleInput(stateManager* aStateManager)
{
	string userInput;
	cin >> userInput;
	transform(userInput.begin(), userInput.end(), userInput.begin(), toupper);
	if (userInput == "G") //go to gameplay
	{
		aStateManager->changeState(userInput);
	}
}

#include "stdafx.h"
#include "about.h"
#include <iostream>
#include <string>
#include "stateManager.h"

using namespace std;

about::about()
{
}


about::~about()
{
}

void about::draw()
{
	cout << "This is the About section!" << endl;
	cout << "Made by Hannah Jones (7649975)" << endl;
	cout << "Press <M> to return to the Main Menu." << endl;
}

void about::handleInput(stateManager* aStateManager)
{
	string userInput;
	cin >> userInput;
	if (userInput == "M") //go to menu
	{
		aStateManager->changeState(userInput);
	}
}

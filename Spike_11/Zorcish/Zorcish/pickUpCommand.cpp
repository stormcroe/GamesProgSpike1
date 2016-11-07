#include "stdafx.h"
#include "pickUpCommand.h"

using namespace std;

pickUpCommand::pickUpCommand()
{
	addIdentifier("GRAB");
	addIdentifier("PICK");
	addIdentifier("PICKUP");
	addIdentifier("TAKE");
	addIdentifier("ACQUIRE");
	addIdentifier("STEAL");
}

void pickUpCommand::execute(player * mainPLayer, world * mainWorld, vector<string> text)
{
	if (text.size() == 2)
	{
		if (mainPLayer->getBoard() != nullptr){
			mainPLayer->getBoard()->addMessage(new message("me", text[1], "PICKUP"));
			mainPLayer->updateBoard();
		}
		else {
			mainPLayer->performAction(new message("me", text[1], "PICKUP"));
		}

	}

	else if (text.size() == 3 && text[2] == "UP")
	{
		if (mainPLayer->getBoard() != nullptr){
			mainPLayer->getBoard()->addMessage(new message("me", text[1], "PICKUP"));
			mainPLayer->updateBoard();
		}
		else {
			mainPLayer->performAction(new message("me", text[1], "PICKUP"));
		}
	}

	else if (text.size() == 3 && text[1] == "UP")
	{
		if (mainPLayer->getBoard() != nullptr){
			mainPLayer->getBoard()->addMessage(new message("me", text[2], "PICKUP"));
			mainPLayer->updateBoard();
		}
		else {
			mainPLayer->performAction(new message("me", text[2], "PICKUP"));
		}
	
	}
}

pickUpCommand::~pickUpCommand()
{
}

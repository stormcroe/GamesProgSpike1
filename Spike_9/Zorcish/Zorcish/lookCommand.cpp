#include "stdafx.h"
#include "lookCommand.h"


lookCommand::lookCommand()
{
	addIdentifier("LOOK");
	addIdentifier("PEEK");
	addIdentifier("GAZE");
	addIdentifier("GANDER");
	addIdentifier("WATCH");
	addIdentifier("VIEW");
	addIdentifier("FIND");
	addIdentifier("SEE");
	addIdentifier("SEARCH");
	addIdentifier("OBSERVE");
}

void lookCommand::execute(player * mainPlayer, world * mainWorld, vector<string> text)
{
	//cout << text.size() << endl;
	if (text.size() == 1)
	{
		lookAround(mainPlayer, mainWorld);
	}
	else if (text.size() == 2 && text[1] == "AROUND") {
		lookAround(mainPlayer, mainWorld);
	}
	else if (text.size() == 2 && text[1] != "AROUND") {
		for each (item* i in mainPlayer->getLocation()->getInventory()->items)
		{
			if (i->getFirstId() == text[1])
			{
				cout << i->getFullDesc() << endl;
			}
		}
	}
	else if (text.size() == 3)
	{
		if (text[1] == "AT")
		{
			if (text[2] == "LOCATION" || text[2] == "SURROUNDINGS")
			{
				cout << "Nearby is ";
				mainPlayer->getLocation()->getInventory()->getAllItems();
			}
			else if (text[2] == "INVENTORY" || text[2] == "PLAYER") {
				cout << "You are carrying: " << endl;
				cout << mainPlayer->getInventory()->getAllItems();
			}
			else
			{
				for each (item* i in mainPlayer->getLocation()->getInventory()->items)
				{
					if (i->getFirstId() == text[2])
					{
						cout << i->getFullDesc() << endl;
					}
				}
			}
		}
		else if (text[1] == "IN") {
			if (text[2] == "LOCATION" || text[2] == "SURROUNDINGS")
			{
				cout << "Nearby is ";
				mainPlayer->getLocation()->getInventory()->getAllItems();
			}
			else if (text[2] == "INVENTORY" || text[2] == "PLAYER") {
				cout << "You are carrying: " << endl;
				cout << mainPlayer->getInventory()->getAllItems();
			}
		}
	}
	else if (text.size() == 4)
	{
		if (text[3] == "LOCATION" || text[3] == "SURROUNDINGS")
		{
			cout << "Nearby is ";
			mainPlayer->getLocation()->getInventory()->getAllItems();
		}
		else if (text[3] == "INVENTORY" || text[3] == "PLAYER") {
			cout << "You are carrying: " << endl;
			mainPlayer->getInventory()->getAllItems();
		}
	}
	else if (text.size() == 5)
	{
		if (text[4] == "LOCATION" || text[4] == "SURROUNDINGS")
		{
			cout << "Nearby is ";
			mainPlayer->getLocation()->getInventory()->getAllItems();
		}
		else if (text[4] == "INVENTORY" || text[4] == "PLAYER") {
			cout << "You are carrying: " << endl;
			mainPlayer->getInventory()->getAllItems();
		}
	}
	else {
		cout << "I can't look there, oh Benevolent One!" << endl;
	}
}

void lookCommand::lookAround(player * mainPlayer, world * mainWorld)
{
	cout << mainPlayer->getLocation()->getFullDesc() << endl;
	cout << "In this location is: ";
	cout << mainPlayer->getLocation()->getInventory()->getAllItems();
	cout << endl;
	cout << "You are able to move: " << endl;
	cout << mainPlayer->getLocation()->viewPaths() << endl;

}


lookCommand::~lookCommand()
{
}

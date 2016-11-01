#include "stdafx.h"
#include "moveCommand.h"


moveCommand::moveCommand()
{
	addIdentifier("GO");
	addIdentifier("MOVE");
	addIdentifier("WALK");
	addIdentifier("TRAVEL");
	addIdentifier("STROLL");
	addIdentifier("WANDER");
	addIdentifier("MARCH");
	addIdentifier("RUN");
	addIdentifier("SASHAY");
	addIdentifier("JUMP");
}

void moveCommand::execute(player * mainPlayer, world * mainWorld, vector<string> text)
{
	
	int i = 0;
	if (text.size() == 1)
	{
		i =  0;
	}

	if (text.size() == 2)
	{
		i = 1;
	}
	//cout << "You are entered the abilty to move. " << text[i] << endl;
	if (text[i] == "NORTH" || text[i] == "N")
	{
		for each (path* p in mainPlayer->getLocation()->paths) {
			if (p->getFirstId() == "NORTH")
			{
				mainPlayer->setLocation(p -> getLocation());
				cout << p->getTravelDesc() << endl;
			}
		}
	}
	if (text[i] == "EAST" || text[i] == "E")
	{
		for each (path* p in mainPlayer->getLocation()->paths) {
			if (p->getFirstId() == "EAST")
			{
				mainPlayer->setLocation(p->getLocation());
				cout << p->getTravelDesc() << endl;
			}
		}
	}
	if (text[i] == "SOUTH" || text[i] == "S")
	{
		for each (path* p in mainPlayer->getLocation()->paths) {
			if (p->getFirstId() == "SOUTH")
			{
				mainPlayer->setLocation(p->getLocation());
				cout << p->getTravelDesc() << endl;
			}
		}
	}
	if (text[i] == "WEST" || text[i] == "W")
	{
		for each (path* p in mainPlayer->getLocation()->paths) {
			if (p->getFirstId() == "W")
			{
				mainPlayer->setLocation(p->getLocation());
				cout << p->getTravelDesc() << endl;
			}
		}
	}
	if (text[i] == "NORTHEAST" || text[i] == "NE")
	{
		for each (path* p in mainPlayer->getLocation()->paths) {
			if (p->getFirstId() == "NORTHEAST")
			{
				mainPlayer->setLocation(p->getLocation());
				cout << p->getTravelDesc() << endl;
			}
		}
	}
	if (text[i] == "SOUTHEAST" || text[i] == "SE")
	{
		for each (path* p in mainPlayer->getLocation()->paths) {
			if (p->getFirstId() == "SOUTHEAST")
			{
				mainPlayer->setLocation(p->getLocation());
				cout << p->getTravelDesc() << endl;
			}
		}
	}
	if (text[i] == "SOUTHWEST" || text[i] == "SW")
	{
		for each (path* p in mainPlayer->getLocation()->paths) {
			if (p->getFirstId() == "SOUTHWEST")
			{
				mainPlayer->setLocation(p->getLocation());
				cout << p->getTravelDesc() << endl;
			}
		}
	}
	if (text[i] == "NORTHWEST" || text[i] == "NW")
	{
		for each (path* p in mainPlayer->getLocation()->paths) {
			if (p->getFirstId() == "NORTHWEST")
			{
				mainPlayer->setLocation(p->getLocation());
				cout << p->getTravelDesc() << endl;
			}
		}
	}
	if (text[i] == "DOWN" || text[i] == "D")
	{
		
		for each (path* p in mainPlayer->getLocation()->paths) {
			if (p->getFirstId() == "DOWN")
			{
				mainPlayer->setLocation(p->getLocation());
				cout << p->getTravelDesc() << endl;
			}
		}
	}
}


moveCommand::~moveCommand()
{
}

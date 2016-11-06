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
		for each(item* i in mainPLayer->getLocation()->getInventory()->items)
		{
			if (i->getFirstId() == text[1])
			{
				if (i->getPickupable()) {
					mainPLayer->getInventory()->addItem(i);
					mainPLayer->getLocation()->getInventory()->takeItem(text[1]);
					cout << "You have picked up " << i->getName() << endl;
				}
				else
					cout << "You try as hard as you might but you just can't pick up " << i->getName() << endl;

				break;
			}
		}
	}

	else if (text.size() == 3 && text[2] == "UP")
	{
		for each(item* i in mainPLayer->getLocation()->getInventory()->items)
		{
			if (i->getFirstId() == text[1])
			{
				if (i->getPickupable()) {
					mainPLayer->getInventory()->addItem(i);
					mainPLayer->getLocation()->getInventory()->takeItem(text[1]);
					cout << "You have picked " << i->getName() << " up" << endl;
				}
				else
					cout << "You try as hard as you might but you just can't pick " << i->getName() << " up" << endl;

				break;
			}
		}
	}

	else if (text.size() == 3 && text[1] == "UP")
	{
		for each(item* i in mainPLayer->getLocation()->getInventory()->items)
		{
			if (i->getFirstId() == text[2])
			{
				if (i->getPickupable()) {
					mainPLayer->getInventory()->addItem(i);
					mainPLayer->getLocation()->getInventory()->takeItem(text[2]);
					cout << "You have picked up " << i->getName() << endl;
				}
				else
					cout << "You try as hard as you might but you just can't pick up " << i->getName() << endl;

				break;
			}
		}
	}
}

pickUpCommand::~pickUpCommand()
{
}

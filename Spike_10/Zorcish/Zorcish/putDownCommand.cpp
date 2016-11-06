#include "stdafx.h"
#include "putDownCommand.h"

using namespace std;

putDownCommand::putDownCommand()
{
	addIdentifier("DROP");
	addIdentifier("RELEASE");
	addIdentifier("PUT");
	addIdentifier("PUTDOWN");
	addIdentifier("LEAVE");
}

void putDownCommand::execute(player * mainPLayer, world * mainWorld, vector<string> text)
{
	if (text.size() == 2)
	{
		for each(item* i in mainPLayer->getInventory()->items)
		{
			if (i->getFirstId() == text[1])
			{
				mainPLayer->getLocation()->getInventory()->addItem(i);
				mainPLayer->getInventory()->takeItem(text[1]);
				cout << "You have dropped " << i->getName() << endl;
				break;
			}
		}
	}
	else if (text.size() == 3)
	{
		if (text[2] == "DOWN")
		{
			for each(item* i in mainPLayer->getInventory()->items)
			{
				if (i->getFirstId() == text[1])
				{
					mainPLayer->getLocation()->getInventory()->addItem(i);
					mainPLayer->getInventory()->takeItem(text[1]);
					cout << "You have dropped " << i->getName() << endl;
					break;
				}
			}
		}
		else if (text[1] == "DOWN")
		{
			for each(item* i in mainPLayer->getInventory()->items)
			{
				if (i->getFirstId() == text[2])
				{
					mainPLayer->getLocation()->getInventory()->addItem(i);
					mainPLayer->getInventory()->takeItem(text[2]);
					cout << "You have dropped " << i->getName() << endl;
					break;
				}
			}
		}
	}
}

putDownCommand::~putDownCommand()
{
}
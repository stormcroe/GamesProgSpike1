#include "stdafx.h"
#include "sharpenCommand.h"

using namespace std;

sharpenCommand::sharpenCommand()
{
	addIdentifier("SHARPEN");
	addIdentifier("PREPARE");
}

void sharpenCommand::execute(player * mainPLayer, world * mainWorld, vector<string> text)
{
	for each (item* i in mainPLayer->getInventory()->items)
	{
		if (i->areYou(text[1]))
		{
			cout << "You find a stone and sharpen " << i->getName() << endl;
			i->setDesc(i->getFullDesc() + " It is now sharper than it was.");
			break;
		}
	}
}

sharpenCommand::~sharpenCommand()
{
}

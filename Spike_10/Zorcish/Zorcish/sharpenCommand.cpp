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
		if (text.size() > 1)
		{
			if (i->areYou(text[1]))
			{
				i->Sharpen();
			}
		}
		else {
			cout << "Sharpen what?" << endl;
		}
	}
}

sharpenCommand::~sharpenCommand()
{
}

#include "stdafx.h"
#include "player.h"


player::player()
{
	inv = new inventory();
	board = new blackBoard();
}

player::player(string aName, string aDescription) : gameObject("me", aName, aDescription)
{
	inv = new inventory();
	board = new blackBoard();
}

gameObject * player::locate(string id)
{
	if (areYou(id))
	{
		return this;
	}
	gameObject* result;
	result = inv->fetch(id);

	if (!result)
	{
		result = loc->getInventory()->fetch(id);
	}

	return result;
}

string player::getFullDesc()
{
	string result;
	result = "Inventory: " + inv->getAllItems();
	return result;
}

inventory * player::getInventory()
{
	return inv;
}

void player::setLocation(location * l)
{
	loc = l;
}

void player::setInventory(inventory * aInv)
{
	inv = aInv;
}

location * player::getLocation()
{
	return loc;
}

blackBoard* player::getBoard(){
	return board;
}

void player::performAction(message* aMess){
	if (aMess->getAction() == "PICKUP"){
		bool performedAction = false;

		if (aMess->getValue() == "ALL"){

			inventory* newInv = new inventory();
			for each (item * j in getLocation()->getInventory()->items){
				newInv->addItem(j);
			}

			for each (item* i in newInv->items)
			{
				if (i->getPickupable())
				{
					getInventory()->addItem(i);
					getLocation()->getInventory()->takeItem(i->getFirstId());
					performedAction = true;
					cout << "You have picked up " << i->getName() << endl;
				}
			}

			delete newInv;
		}
		else {
			for each (item* i in getLocation()->getInventory()->items)
			{
				if (i->getFirstId() == aMess->getValue() && i->getPickupable())
				{
					getInventory()->addItem(i);
					getLocation()->getInventory()->takeItem(i->getFirstId());
					cout << "You have picked up " << i->getName() << endl;
					performedAction = true;
					break;
				}
			}
		}
		if (!performedAction){
			cout << "You try as hard as you might but you just can't pick up " << aMess->getValue() << endl;
		}
	}
}

void player::updateBoard()
{
	if (board != nullptr)
	{
		if (board->checkMessage("me"))
		{
			performAction(board->getMessage("me"));
		}
		else if (board->checkMessage("ALL"))
		{
			performAction(board->getMessage("ALL"));
		}
		board->clearMessages();
	}
}



player::~player()
{
}

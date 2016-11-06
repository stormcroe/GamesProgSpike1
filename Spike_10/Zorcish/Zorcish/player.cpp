#include "stdafx.h"
#include "player.h"


player::player()
{
	inv = new inventory();
}

player::player(string aName, string aDescription) : gameObject("me", aName, aDescription)
{
	inv = new inventory();

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


player::~player()
{
}

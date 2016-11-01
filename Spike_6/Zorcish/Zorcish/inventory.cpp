#include "stdafx.h"
#include "inventory.h"


inventory::inventory()
{
}

bool inventory::hasItem(string id)
{
	for each (item* i in items)
	{
		if (i == fetch(id))
		{
			return true;
		}
	}
	return false;
}

void inventory::addItem(item * itm)
{
	items.push_back(itm);
}

void inventory::takeItem(string id)
{
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->areYou(id))
		{
			items.erase(items.begin() + i);
		}
	}
}

item * inventory::fetch(string id)
{
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->areYou(id))
		{
			return items[i];
		}
	}
}

int inventory::getInvSize()
{
	return items.size();
}

string inventory::getAllItems()
{
	string result = "\n ";
	for each (item* i in items)
	{
		result += "\t" + i->getShortDesc() + "\n";
	}
	return result;
}


inventory::~inventory()
{
}

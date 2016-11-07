#include "stdafx.h"
#include "location.h"


location::location()
{
}

location::location(string id, string aName, string aDescription) : gameObject(id, aName, aDescription)
{
	addIdentifier("location");
	inv = new inventory();
}

inventory* location::getInventory()
{
	return inv;
}

gameObject * location::locate(string id)
{
	if (areYou(id))
	{
		return this;
	}
	else {
		return inv->fetch(id);
	}
}

void location::addPath(path * p)
{
	paths.push_back(p);
}

string location::viewPaths()
{
	string result = "";
	for each (path* p in paths)
	{
		result += "\t" + p->getShortDesc() + "\n";
	}
	return result;
}


location::~location()
{
}

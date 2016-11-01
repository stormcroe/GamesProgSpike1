#include "stdafx.h"
#include "location.h"


location::location()
{
}

location::location(string id, string aName, string aDescription) : gameObject(id, aName, aDescription)
{
	addIdentifier("location");
}

inventory location::getInventory()
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
		return inv.fetch(id);
	}
}


location::~location()
{
}

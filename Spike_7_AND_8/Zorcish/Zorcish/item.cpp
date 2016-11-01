#include "stdafx.h"
#include "item.h"


item::item()
{
}

item::item(string identifier, string aName, string aDescription, bool aPickup, bool aInv) : gameObject(identifier, aName, aDescription)
{
	pickupable = aPickup;
	isInv = aInv;
}


item::~item()
{
}

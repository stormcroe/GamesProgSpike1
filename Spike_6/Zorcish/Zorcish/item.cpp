#include "stdafx.h"
#include "item.h"


item::item()
{
}

item::item(string identifier, string aName, string aDescription) : gameObject(identifier, aName, aDescription)
{
}


item::~item()
{
}

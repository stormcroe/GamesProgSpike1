#include "stdafx.h"
#include "gameObject.h"


gameObject::gameObject()
{
}

gameObject::gameObject(string ids, string aName, string aDescription) : identifiableObject(ids)
{
	name = aName;
	description = aDescription;
}

string gameObject::getName()
{
	return name;
}

string gameObject::getShortDesc()
{
	string result;

	result = name + " (" + getFirstId() + ")";

	return result;
}


gameObject::~gameObject()
{
}


string gameObject::getFullDesc()
{
	return description;
}

#include "stdafx.h"
#include "identifiableObject.h"

identifiableObject::identifiableObject()
{
}

identifiableObject::identifiableObject(string ids)
{
	addIdentifier(ids);
	firstID = identifiers[0];
}

bool identifiableObject::areYou(string id)
{
	for each (string i in identifiers) {
		if (i == id)
			return true;
	}
	return false;
}

string identifiableObject::getFirstId()
{
	return firstID;
}

void identifiableObject::addIdentifier(string id)
{
	identifiers.push_back(id);

}

identifiableObject::~identifiableObject()
{
}

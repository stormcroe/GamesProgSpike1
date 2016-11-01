#include "stdafx.h"
#include "path.h"
#include "location.h"

path::path()
{
}

path::path(string aDirection, location * end, string desc) : gameObject(aDirection, "", desc)
{
	endLoc = end;
	travelDesc = desc;
	direction = aDirection;
}

location * path::getLocation()
{
	return endLoc;
}

string path::getTravelDesc()
{
	return travelDesc;
}


path::~path()
{
}

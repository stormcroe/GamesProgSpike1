#include "stdafx.h"
#include "world.h"


world::world()
{
}


void world::addLocation(location * loc)
{
	locs.push_back(loc);
}

world::~world()
{
}

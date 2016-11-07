#pragma once
#include "gameObject.h"


using namespace std;
class location; //This is a template location so that this file knows about locations.
class path :
	public gameObject
{
private:
	location* endLoc;
	string travelDesc;
	string direction;

public:
	path();
	path(string direction, location* end, string desc);
	location* getLocation();
	string getTravelDesc();
	~path();
};


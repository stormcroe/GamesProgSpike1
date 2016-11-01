#pragma once
#include <string>
#include <vector>
#include "location.h"

using namespace std;

class world
{
public:
	world();
	vector<location*> locs;
	void addLocation(location* loc);
	~world();
};


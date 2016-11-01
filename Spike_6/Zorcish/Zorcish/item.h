#pragma once
#include "gameObject.h"

using namespace std;

class item :
	public gameObject
{
public:
	item();
	item(string identifier, string aName, string aDescription);

	~item();
};


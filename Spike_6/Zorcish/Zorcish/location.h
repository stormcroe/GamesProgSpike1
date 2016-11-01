#pragma once
#include "gameObject.h"
#include "inventory.h"
#include "iCanHazInventory.h"

using namespace std;

class location : public gameObject, iCanHazInventory
{
public:
	location();
	location(string id, string aName, string aDescription);
	inventory getInventory();
	gameObject* locate(string id);
	~location();
private:
	inventory inv;
};


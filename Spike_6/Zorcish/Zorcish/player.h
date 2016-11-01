#pragma once
#include "gameObject.h"
#include "location.h"
#include "inventory.h"
#include "iCanHazInventory.h"

class player :
	public gameObject, iCanHazInventory
{
public:
	player();
	player(string aName, string aDescription);
	gameObject* locate(string id);
	string getFullDesc();
	inventory* getInventory();
	void setInventory(inventory* aInv);
	location* getLocation();
	~player();
private:
	inventory* inv;
	location* loc;
};


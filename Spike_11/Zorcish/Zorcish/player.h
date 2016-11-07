#pragma once
#include "gameObject.h"
#include "location.h"
#include "inventory.h"
#include "iCanHazInventory.h"
#include "blackBoard.h"

class player :
	public gameObject, iCanHazInventory
{
public:
	player();
	player(string aName, string aDescription);
	gameObject* locate(string id);
	string getFullDesc();
	inventory* getInventory();
	void setLocation(location* l);
	void setInventory(inventory* aInv);
	location* getLocation();
	void performAction(message* aMess);
	blackBoard * getBoard();
	void updateBoard();
	~player();
private:
	blackBoard * board;
	inventory* inv;
	location* loc;

};


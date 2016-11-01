#pragma once
#include "gameObject.h"
#include "inventory.h"
#include <string>

class iCanHazInventory
{
public:
	iCanHazInventory();
	virtual gameObject* locate(std::string id)= 0;
	~iCanHazInventory();
};


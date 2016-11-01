#pragma once
#include "gameObject.h"


using namespace std;

class item :
	public gameObject
{
private:
	bool pickupable;
	bool isInv;
public:
	item();
	item(string identifier, string aName, string aDescription, bool aPickup, bool aInv);
	bool getPickupable();
	~item();
};


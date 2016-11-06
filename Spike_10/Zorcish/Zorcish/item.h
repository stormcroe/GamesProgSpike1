#pragma once
#include "gameObject.h"
#include "Sharpenable.h"

using namespace std;

class item :
	public gameObject
{
private:
	bool pickupable;
	bool isInv;
	Sharpenable * sharpComponant = nullptr;
public:
	item();
	item(string identifier, string aName, string aDescription, bool aPickup, bool aInv);
	item(string identifier, string aName, string aDescription, bool aPickup, bool aInv, bool aSharp);
	bool getPickupable();
	void Sharpen();
	~item();
};


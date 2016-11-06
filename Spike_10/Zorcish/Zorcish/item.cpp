#include "stdafx.h"
#include "item.h"


item::item()
{
}

item::item(string identifier, string aName, string aDescription, bool aPickup, bool aInv) : gameObject(identifier, aName, aDescription)
{
	pickupable = aPickup;
	isInv = aInv;
}

item::item(string identifier, string aName, string aDescription, bool aPickup, bool aInv, bool aSharp) : gameObject(identifier, aName, aDescription){
	sharpComponant = new Sharpenable();
	pickupable = aPickup;
	isInv = aInv;
}

bool item::getPickupable()
{
	return pickupable;
}

void item::Sharpen(){
	if (!(sharpComponant == nullptr)){
		sharpComponant->sharpen(this);
	}
	else {
		cout << this->getName() << " cannot be sharpened." << endl;
	}
}

item::~item()
{
}

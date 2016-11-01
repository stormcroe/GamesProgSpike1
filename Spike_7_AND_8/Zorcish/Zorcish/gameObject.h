#pragma once
#include "identifiableObject.h"

using namespace std;

class gameObject :
	public identifiableObject
{
public:
	gameObject();
	gameObject(string ids, string aName, string aDescription);
	string getName();
	string getShortDesc();
	~gameObject();

private:
	string description;
	string name;
public:
	virtual string getFullDesc();
};


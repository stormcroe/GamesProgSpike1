#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;

class identifiableObject
{
private:
	string firstID;
	vector <string> identifiers;

public:
	identifiableObject();
	identifiableObject(string ids);
	bool areYou(string id);
	string getFirstId();
	void addIdentifier(string id);
	~identifiableObject();

};


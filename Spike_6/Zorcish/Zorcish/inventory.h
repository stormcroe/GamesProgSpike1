#pragma once
#include <vector>
#include "item.h"
#include <string>

using namespace std;

class inventory
{
public:
	inventory();
	bool hasItem(string id);
	void addItem(item* itm);
	void takeItem(string id);
	item* fetch(string id);
	int getInvSize();
	string getAllItems();
	~inventory();
private:
	vector<item*> items;
};


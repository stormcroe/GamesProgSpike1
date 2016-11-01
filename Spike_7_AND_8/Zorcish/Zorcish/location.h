#pragma once
#include "gameObject.h"
#include "inventory.h"
#include "iCanHazInventory.h"
#include "path.h"

using namespace std;

class location : public gameObject, iCanHazInventory
{
public:
	location();
	location(string id, string aName, string aDescription);
	inventory getInventory();
	gameObject* locate(string id);
	vector<path*> paths;
	void addPath(path* p);
	string viewPaths();
	//string descLoc();
	//string getName() const;
	~location();
private:
	inventory inv;
};


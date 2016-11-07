#pragma once
#include "command.h"

using namespace std;

class putDownCommand :
	public command
{
public:
	putDownCommand();
	void execute(player* mainPLayer, world* mainWorld, vector<string> text);
	~putDownCommand();
};


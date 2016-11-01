#pragma once
#include "command.h"

using namespace std;

class pickUpCommand :
	public command
{
public:
	pickUpCommand();
	void execute(player* mainPLayer, world* mainWorld, vector<string> text);
	~pickUpCommand();
};


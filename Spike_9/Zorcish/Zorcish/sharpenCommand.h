#pragma once
#include "command.h"
#include "item.h"

using namespace std;

class sharpenCommand :
	public command
{
public:
	sharpenCommand();
	void execute(player* mainPLayer, world* mainWorld, vector<string> text);
	~sharpenCommand();
};


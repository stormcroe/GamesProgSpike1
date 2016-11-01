#pragma once
#include "command.h"
class moveCommand :
	public command
{
public:
	moveCommand();
	void execute(player* mainPlayer, world* mainWorld, vector<string> text);
	~moveCommand();
};


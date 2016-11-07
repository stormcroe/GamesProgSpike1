#pragma once
#include "command.h"
class lookCommand :
	public command
{
public:
	lookCommand();
	void execute(player* mainPlayer, world* mainWorld, vector<string> text);
	void lookAround(player* mainPlayer, world* mainWorld);
	~lookCommand();
};


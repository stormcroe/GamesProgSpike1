#pragma once
#include "gameState.h"
#include "player.h"
#include "location.h"
#include "item.h"


class gamePlay :
	public gameState
{
private:
	player* playerOne;
	item* sword;
	bool playOnce;

public:
	gamePlay();
	~gamePlay();

	void draw();
	void handleInput(stateManager*);
};


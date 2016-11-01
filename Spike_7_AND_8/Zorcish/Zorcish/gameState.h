#pragma once
class stateManager;

class gameState
{
public:
	gameState();
	~gameState();

	virtual void draw() = 0;
	virtual void handleInput(stateManager*) = 0;
};


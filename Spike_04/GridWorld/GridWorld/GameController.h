#pragma once
#include "Player.h"
#include "Grid.h"
#include "GridSquare.h"
#include "Terrain.h"
#include <iostream>
#include <string>
#include <thread>


using namespace std;

class GameController
{
	Grid* _gamespace;
	Player* _player;
	

public:
	char _input;
	bool _gameover;
	static void GetInput(char *input, bool *gameOver);
	void Update(const char &input);
	void Render();
	GameController();
	~GameController();


	void GameLoop();
};


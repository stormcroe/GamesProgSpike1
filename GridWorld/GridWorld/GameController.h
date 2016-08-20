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
	void Update(const char &input);
	
	void Render();
public:
	bool _gameover;
	static void GetInput(char &input);
	GameController();
	~GameController();


	void GameLoop();
};


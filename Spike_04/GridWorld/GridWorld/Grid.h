#pragma once
#include "Terrain.h"
#include "GridSquare.h"

using namespace std;

class Grid
{
	GridSquare* _grid;
public:
	Grid();
	~Grid();
	// //Gets the terrain of a specified position
	Terrain GetTerrainAt(int pos);
};


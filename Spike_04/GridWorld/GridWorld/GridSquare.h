#pragma once
#include "Terrain.h"

class GridSquare
{
public:
	GridSquare();
	~GridSquare();
private:
	int _position;
public:
	// Sets the positional identifier of this gird square
	void SetPosition(int pos);
private:
	Terrain _terrain;
public:
	// //Gets the terrain of the grid square
	Terrain GetTerrain();
	// Sets the Terrain of grid square
	void SetTerrain(Terrain tera);
};


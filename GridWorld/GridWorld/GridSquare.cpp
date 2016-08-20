#include "GridSquare.h"

using namespace std;

GridSquare::GridSquare()
{
	_position = 0;
	_terrain = Terrain::EMPTY;
}

GridSquare::~GridSquare()
{
	
}


// Gets the positional identifier of the gird square
void GridSquare::SetPosition(int pos)
{
	_position = pos;
}


// //Gets the terrain of the grid square
Terrain GridSquare::GetTerrain()
{
	return _terrain;
}

// Sets the terrain of the gird square
void GridSquare::SetTerrain(Terrain tera)
{
	_terrain = tera;
}

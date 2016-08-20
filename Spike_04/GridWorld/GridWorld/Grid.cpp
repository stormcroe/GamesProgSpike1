#include "Grid.h"


Grid::Grid()
{
	_grid = new GridSquare[72];
	//Build the Grid
	for (int i = 0; i < 72; i++)
	{
		_grid[i].SetPosition(i);
		//Set Terrain for specific grid squares.
		switch (i)
		{
		case 10: //Gold Here
			_grid[i].SetTerrain(Terrain::GOLD);
			break;
		case 46: //Death at these points
		case 57:
		case 28:
			_grid[i].SetTerrain(Terrain::DEATH);
			break;
		case 11: //Empty Terrain here
		case 13:
		case 14:
		case 15:
		case 19:
		case 20:
		case 22:
		case 26:
		case 25:
		case 24:
		case 30:
		case 31:
		case 29:
		case 33:
		case 42:
		case 48:
		case 49: 
		case 47: 
		case 51: 
		case 55: 
		case 56: 
		case 58: 
		case 59: 
		case 60:
			_grid[i].SetTerrain(Terrain::EMPTY);
			break;
		default:
			_grid[i].SetTerrain(Terrain::WALL);
			break;
		}

	}
	


}


Grid::~Grid()
{
	delete _grid;
}


// //Gets the terrain of a specified position
Terrain Grid::GetTerrainAt(int pos)
{
	Terrain result;

	result = _grid[pos].GetTerrain();

	return result;
}

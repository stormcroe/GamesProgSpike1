/*
**
**This Is Spike 4, Non-Blocking Game Loop.
**
*/

#include "Player.h"
#include "Grid.h"
#include "GridSquare.h"
#include "Terrain.h"
#include "GameController.h"

using namespace std;

int main(){
	
	GameController lGameController;
	//lGameController = new GameController();
	
	lGameController.GameLoop();

	//delete lGameController;

	cout << "press any key to exit...";
	cin.ignore();
	return 0;
}
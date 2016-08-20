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

	cout << "press enter to exit...";
	cin.ignore();
	return 0;
}
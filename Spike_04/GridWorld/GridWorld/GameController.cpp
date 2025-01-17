#include "GameController.h"


GameController::GameController()
{
	_gamespace = new Grid();
	_player = new Player();
	_gameover = false;
	_input = NULL;
}


GameController::~GameController()
{
	//delete _gamespace;
	//delete _player;
}

void GameController::GetInput(char *input, bool *gameOver)
{
	do{
		
		if (*input == NULL){
			cout << endl << "This is using Threads, This is the Input thread." << endl;
			char buffer;
			cout << "Enter A Command. N (North), S (South), E (East), W (West) and Q (Quit): ";
			cin >> buffer;
			*input = buffer;
			_flushall();
		}
	} while (*gameOver == false);
}

void GameController::Update(const char &input)
{

	if (tolower(input) == 'q') //Quit Game
	{
		_gameover = true;
	}
	else //Check Commands
	{
		switch (tolower(input))
		{
		case 'n':
			if (_gamespace->GetTerrainAt(_player->GetPosition() - 1) != Terrain::WALL)
			{
				//cout << "Valid Move" << endl;
				_player->MoveNorth();
			}
			else
			{
				cout << "You can't go that way! There is a wall." << endl;
			}
			break;
		case 's':
			if (_gamespace->GetTerrainAt(_player->GetPosition() + 1) != Terrain::WALL)
			{
				//cout << "Valid Move" << endl;
				_player->MoveSouth();
			}
			else {
				cout << "You can't go that way! There is a wall." << endl;
			}
			break;
		case 'e':
			if (_gamespace->GetTerrainAt(_player->GetPosition() + 9) != Terrain::WALL)
			{
				//cout << "Valid Move" << endl;
				_player->MoveEast();
			}
			else 
			{
				cout << "You can't go that way! There is a wall." << endl;
			}
			break;
		case 'w':
			if (_gamespace->GetTerrainAt(_player->GetPosition() - 9) != Terrain::WALL)
			{
				//cout << "Valid Move" << endl;
				_player->MoveWest();
			}
			else
			{
				cout << "You can't go that way! There is a wall." << endl;
			}
			break;
		case -1:
			break;
		default:
			cerr << "Please Use One Of The Specified Commands" <<endl;
			break;
		}
		
	}
}

void GameController::Render(){
	//Render the Win||Lose Messages when they happen
	if (_gamespace->GetTerrainAt(_player->GetPosition()) == Terrain::GOLD)
	{
		_gameover = true;
		cout << "Well Done, You found the Gold! Good game :)" << endl;
	}
	else if (_gamespace->GetTerrainAt(_player->GetPosition()) == Terrain::DEATH)
	{
		_gameover = true;
		cout << "Oh no! You fell into a pit of poison! Bad End :(" << endl;
	}
	else
	{
		cout << "You are at grid point " << _player->GetPosition() << endl;
	}
}

void GameController::GameLoop()
{
	thread GetUserInputThread(GetInput, &_input, &_gameover);
	//When using threads pass by reference does not work as intended, use pointers.
	do{
		
		if (_input){
			cout << endl << "This is using Threads, This is the Main thread." << endl;
			Update(_input);
			Render();
			_input = NULL;
		}
	} while (! _gameover);

	GetUserInputThread.join();
}


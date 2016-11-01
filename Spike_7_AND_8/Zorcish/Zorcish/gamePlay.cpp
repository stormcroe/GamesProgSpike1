#include "stdafx.h"
#include "gamePlay.h"
#include <iostream>
#include<fstream>
#include <string>
#include "stateManager.h"
#include <algorithm>
#include <sstream>

using namespace std;

gamePlay::gamePlay()
{
	commandProcesser = new commandProcessing();
	setUpGame();
}


gamePlay::~gamePlay()
{
}

void gamePlay::setUpGame()
{
	//create a new world
	mainWorld = new world();
	
	string line;
	string adventureMap = "adventureMap.txt";
	string playerTempName, playerTempDesc, pLayerTempLoc;
	string locTempId, locTempName, locTempDesc;
	string pathTempFrom, pathTempTo, pathTempDesc, pathTempDirection;
	string itemTempId, itemTempName, itemTempDesc, itemTempPickUp, itemIsInV, itemTempLocation;
	bool itemPickupable, itemInv;
	location* PathTempEnd = new location("test", "test", "test");
	location* PathTempStart = PathTempEnd;

	ifstream mapStream(adventureMap);
	if (mapStream.is_open()) {
		while (getline(mapStream, line))
		{
			if (line == "LOCATION") {
				getline(mapStream, line);
				locTempId = line;
				getline(mapStream, line);
				locTempName = line;
				getline(mapStream, line);
				locTempDesc = line;
				mainWorld->addLocation(new location(locTempId, locTempName, locTempDesc));
				/*for each (location * l in mainWorld->locs)
				{
					cout << l->getFullDesc() << endl;
				}*/
				
			}
			else if (line == "PATH") {
				getline(mapStream, line);
				pathTempFrom = line;
				getline(mapStream, line);
				pathTempTo = line;
				getline(mapStream, line);
				pathTempDirection = line;
				getline(mapStream, line);
				pathTempDesc = line;
				
				for each (location* l in mainWorld ->locs)
				{
					if (l->getFirstId() == pathTempFrom) { //If l is the paths start
						PathTempStart = l;
						for each (location* j in mainWorld ->locs)
						{
							if (j->getFirstId() == pathTempTo) { //IF j is the paths end
								PathTempEnd = j;
								path * p = new path(pathTempDirection, PathTempEnd, pathTempDesc);
								PathTempStart->addPath(p);
								break;
							}
						}
						break;
					}
				}
				
				
			}
			else if (line == "PLAYER") {
				getline(mapStream, line);
				pLayerTempLoc = line;
				getline(mapStream, line);
				playerTempName = line;
				getline(mapStream, line);
				playerTempDesc = line;
				playerOne = new player(playerTempName, playerTempDesc);
				for each (location * l in mainWorld->locs)
				{
					if (l->areYou(pLayerTempLoc)) {
						playerOne->setLocation(l);
						//cout << playerOne->getFullDesc() << endl;
						
						break;
					}
				}
				
			}
			else if (line == "ITEM") {
				getline(mapStream, line);
				itemTempLocation = line;
				getline(mapStream, line);
				itemTempId = line;
				getline(mapStream, line);
				itemTempName = line;
				getline(mapStream, line);
				itemTempDesc = line;
				getline(mapStream, line);
				itemIsInV = line;
				if (itemIsInV == "TRUE")
					itemInv = true;
				else
					itemInv = false;
				getline(mapStream, line);
				itemTempPickUp = line;
				if (itemTempPickUp == "TRUE")
					itemPickupable = true;
				else
					itemPickupable = false;
				//Put item in a locations Inventory, or a locations Inventory
				if (itemTempLocation == "PLAYER") {
					playerOne->getInventory()->addItem(new item(itemTempId, itemTempName, itemTempDesc, itemPickupable, itemInv));
					//cout << playerOne->getFullDesc() << endl;
					//cout<< playerOne->getInventory()->getInvSize() << endl;
				}
				else {
					for each (location * l in mainWorld->locs)
					{
						if (l->areYou(itemTempLocation)) {
							l->getInventory().addItem(new item(itemTempId, itemTempName, itemTempDesc, itemPickupable, itemInv));
							break;
						}
					}
				}
			}
		}
	}
}

void gamePlay::draw()
{
	if (playOnce == false)
	{
		cout << "----------------------------------------------------------" << endl;
		cout << "This is the Game! Check out all this innovative gameplay!" << endl;
		cout << "To return to the Main Menu, enter <M>." << endl;
		cout << "To end the game and see your score, enter <E>." << endl;
		cout << "----------------------------------------------------------" << endl;
		playOnce = true;
	}
}

void gamePlay::handleInput(stateManager* aStateManager)
{
	vector<string> vUserInput; 
	string userInput;
	getline(cin, userInput);
	transform(userInput.begin(), userInput.end(), userInput.begin(), toupper);
	if (userInput == "M") //go to menu
	{
		playOnce = false;
		aStateManager->changeState(userInput);
	}

	else if (userInput == "E") //go to end score
	{
		playOnce = false;
		aStateManager->changeState(userInput);
	}
	else
	{
		if (!userInput.empty())
		{
			stringstream ss;
			ss.str(userInput);
			string item;
			while (getline(ss, item, ' '))
			{
				vUserInput.push_back(item);
			}
			commandProcesser->run(playerOne, mainWorld, vUserInput);
		}
		
	}
	/*else if (userInput == "CREATE ITEM") {
		string id, aName, aDesc;
		cout << "Enter the id for this item" << endl;
		getline(cin, id);
		cout << "Enter the name for this item" << endl;
		getline(cin, aName);
		cout << "Enter the description for this item" << endl;
		getline(cin, aDesc);
		cout << playerOne->getFullDesc() << endl;
		playerOne->getInventory()->addItem(new item(id, aName, aDesc));
		cout << playerOne->getFullDesc() << endl;

	}
	else if (userInput == "DROP ITEM") {
		string id;
		cout << playerOne->getFullDesc();
		cout << "Define the ID of the Item to drop" << endl;
		getline(cin, id);
		playerOne->getInventory()->takeItem(id);
		cout << playerOne->getFullDesc();
	}
	else if (userInput == "SEE INVENTORY") {
		string temp;
		cout << playerOne->getFullDesc();
		getline(cin, temp);
	}*/
	

}

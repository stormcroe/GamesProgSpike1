#include "stdafx.h"
#include "gamePlay.h"
#include <iostream>
#include <string>
#include "stateManager.h"
#include <algorithm>

using namespace std;

gamePlay::gamePlay()
{
	cout << "Creating PLayer ..." << endl;
	playerOne = new player("Player 1", "The player");
	cout << "Player Short Desc: " << playerOne->getShortDesc() << endl;
	cout << "Player Long Desc: " << endl << playerOne->getFullDesc() << endl;
	cout << "Creating a sword" << endl;
	sword = new item("slashy", "Longsword", "A sharp and pointy sword that is long. A note on the hilt says 'Hold here'");
	playerOne->getInventory()->addItem(sword);
	cout << "Player Long Description: "<< endl << playerOne->getFullDesc() << endl;
	playOnce = false;
}


gamePlay::~gamePlay()
{
}

void gamePlay::draw()
{
	if (playOnce == false)
	{
		cout << "----------------------------------------------------------" << endl;
		cout << "This is the Game! Check out all this innovative gameplay!" << endl;
		cout << "We can test the players inventory here. Commands are as follows: " << endl;
		cout << "\t<Create Item> Creates an Item using arguments." << endl;
		cout << "\t<Drop Item> Drops an item [id] from the players inventory." << endl;
		cout << "\t<See Inventory> Prints the players inventory" << endl;

		cout << "To return to the Main Menu, enter <M>." << endl;
		cout << "To end the game and see your score, enter <E>." << endl;
		cout << "----------------------------------------------------------" << endl;
		playOnce = true;
	}
}

void gamePlay::handleInput(stateManager* aStateManager)
{
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
	else if (userInput == "CREATE ITEM") {
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
	}
	

}

#pragma once
#include <string>


class Player
{
	int _position;
public:
	Player();
	~Player();

	//These functions move the player one grid square in the direction specified
	void MoveNorth();
	void MoveSouth();
	void MoveEast();
	void MoveWest();

	//This Fuction Returns the position of the Player
//	string GetPosition();

	// This Function Gets the position of the player
	int GetPosition();
	
};


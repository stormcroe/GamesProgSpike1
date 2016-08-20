#include "Player.h"

using namespace std;

Player::Player()
{
	//initialize position at 26
	_position = 26;
}


Player::~Player()
{

}

void Player::MoveNorth()
{
	_position--;
}

void Player::MoveSouth()
{
	_position++;
}

void Player::MoveEast()
{
	_position += 9;
}

void Player::MoveWest()
{
	_position -= 9;
}

// This Function Gets the position of the player
int Player::GetPosition()
{
	int result = _position;
	return result;
}

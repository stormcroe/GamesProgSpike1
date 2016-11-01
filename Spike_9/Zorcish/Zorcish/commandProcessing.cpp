#include "stdafx.h"
#include "commandProcessing.h"


commandProcessing::commandProcessing()
{
	look = new lookCommand();
	move = new moveCommand();
	up = new pickUpCommand();
	down = new putDownCommand();
	sharpen = new sharpenCommand();
}

void commandProcessing::run(player * aPlayer, world * aWorld, vector<string> playerInput)
{
	if (!playerInput.empty())
	{
		//cout << "You entered: " << playerInput[0] << endl;
		if (look->areYou(playerInput[0]))
		{
			if (playerInput.size() >= 1)
			{
				look->execute(aPlayer, aWorld, playerInput);
			}
		}
		else if (move->areYou(playerInput[0]))
		{
			if (playerInput.size() >= 1)
			{
				move->execute(aPlayer, aWorld, playerInput);
			}
		}
		else if (up->areYou(playerInput[0]))
		{
			if (playerInput.size() >= 1)
			{
				up->execute(aPlayer, aWorld, playerInput);
			}
		}
		else if (down->areYou(playerInput[0]))
		{
			if (playerInput.size() >= 1)
			{
				down->execute(aPlayer, aWorld, playerInput);
			}
		}
		else if (sharpen->areYou(playerInput[0]))
		{
			if (playerInput.size() >= 1)
			{
				sharpen->execute(aPlayer, aWorld, playerInput);
			}
		}
		else {
			cout << "What are you yammering on about?" << endl;
		}
	}
	else {
		cout << "I seek guidance, oh Benevolent One!" << endl;
	}
}


commandProcessing::~commandProcessing()
{
}

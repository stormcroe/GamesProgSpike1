#pragma once
#include <string>

using namespace std;

class boardMessage
{
public:
	boardMessage();
	boardMessage(string , string , string );
	~boardMessage();

	string getPlayer();
	string getItem();
	string getAction();

private:
	string player;
	string item;
	string action;
};
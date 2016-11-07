#pragma once
#include <string>
#include "boardMessage.h"
#include <vector>

using namespace std;

class messageBoard
{
private:
	vector<boardMessage*> messages;
public:
	messageBoard();
	~messageBoard();
	void addMessage(boardMessage* newMessage);
	bool checkMessage(string checker);
	boardMessage getMessage(string checker);
	void clearMessages();
};

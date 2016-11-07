#pragma once
#include "message.h"
#include <string>
#include <vector>

class blackBoard
{
private:
	std:: vector<message*> messages;
public:
	blackBoard();
	~blackBoard();
	void addMessage(message* newMessage);
	bool checkMessage(std::string checker);
	message* getMessage(std::string checker);
	void clearMessages();
};


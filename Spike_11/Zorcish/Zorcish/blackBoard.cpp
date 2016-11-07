#include "stdafx.h"
#include "blackBoard.h"


blackBoard::blackBoard()
{
}


blackBoard::~blackBoard()
{
}

void blackBoard::addMessage(message * newMessage)
{
	messages.push_back(newMessage);
}

bool blackBoard::checkMessage(std::string checker)
{
	for each (message * m in messages)
	{
		if (m->getChecker() == checker)
		{
			return true;
		}
		else if (m->getChecker() == "ALL")
		{
			return true;
		}
	}
	return false;
}

message* blackBoard::getMessage(std::string checker)
{
	for each (message * m in messages)
	{
		if (m->getChecker() == checker)
		{
			return m;
		}
		else if (m->getChecker() == "ALL")
		{
			return m;
		}
	}
	return nullptr;
}

void blackBoard::clearMessages()
{
	for each (message* m in messages)
	{
		delete m;
	}
	messages.clear();
}

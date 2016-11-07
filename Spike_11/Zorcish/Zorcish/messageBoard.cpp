#include "stdafx.h"
#include "messageBoard.h"
#include <iostream>

messageBoard::messageBoard()
{
}


messageBoard::~messageBoard()
{
}

void messageBoard::addMessage(boardMessage * newMessage)
{
	messages.push_back(newMessage);
}

bool messageBoard::checkMessage(string checker)
{
	for each (boardMessage * m in messages)
	{
		if (m->getPlayer() == checker)
		{
			return true;
		}
		else if (m->getPlayer() == "ALL")
		{
			return true;
		}
	}
	return false;
}

boardMessage messageBoard::getMessage(string checker)
{
	for each (boardMessage * m in messages)
	{
		if (m->getPlayer() == checker)
		{
			return *m;
		}
		else if (m->getPlayer() == "ALL")
		{
			return *m;
		}
	}
	return boardMessage();
}

void messageBoard::clearMessages()
{
	for each (boardMessage* m in messages)
	{
		delete m;
	}
	messages.clear();
}

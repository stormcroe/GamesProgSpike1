#include "stdafx.h"
#include "boardMessage.h"


boardMessage::boardMessage()
{
}

boardMessage::boardMessage(string _player, string _item, string _action)
{
	player = _player;
	item = _item;
	action = _action;
}

boardMessage::~boardMessage()
{
}

string boardMessage::getItem()
{
	return item;
}

string boardMessage::getPlayer()
{
	return player;
}

string boardMessage::getAction()
{
	return action;
}
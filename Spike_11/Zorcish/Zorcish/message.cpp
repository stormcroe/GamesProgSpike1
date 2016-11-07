#include "stdafx.h"
#include "message.h"


message::message()
{
}

message::message(std::string aChecker, std::string aValue, std::string aAction)
{
	checker = aChecker;
	value = aValue;
	action = aAction;
}


message::~message()
{
}

std::string message::getValue()
{
	return value;
}

std::string message::getChecker()
{
	return checker;
}

std::string message::getAction()
{
	return action;
}

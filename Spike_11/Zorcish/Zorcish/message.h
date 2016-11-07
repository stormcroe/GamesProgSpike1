#pragma once
#include <string>

class message
{
public:
	message();
	message(std::string aChecker, std:: string aValue, std::string aAction);
	~message();

	std::string getValue();
	std::string getChecker();
	std::string getAction();

private:
	std::string value;
	std::string checker;
	std::string action;
};


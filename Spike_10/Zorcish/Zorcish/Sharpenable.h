#pragma once
#include "Component.h"
#include <string>
#include "gameObject.h"


using namespace std;

class Sharpenable :
	public Component
{
public:
	Sharpenable();
	~Sharpenable();
	void sharpen(gameObject* holder);
	bool getSharpened();
private:
	bool isSharpened;
};


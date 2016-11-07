#include "stdafx.h"
#include "Sharpenable.h"


Sharpenable::Sharpenable()
{
	isSharpened = false;
}

bool Sharpenable::getSharpened(){
	return isSharpened;
}
Sharpenable::~Sharpenable()
{
}

void Sharpenable::sharpen(gameObject* holder)
{
	if (!isSharpened){
		cout << "You pick up a stone and sharpen " << holder->getName()<< "." << endl;
		isSharpened = true;
	}
	else {
		cout << "You find that " << holder->getName() << " is already sharpened." << endl;
	}
}
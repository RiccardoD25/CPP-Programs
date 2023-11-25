#pragma once
#include <iostream>
#include <random>
class Die
{
private:
	int value, sides;
public:
	Die(int=6);
	int roll(int);

};


#pragma once
#include "Die.h"
#include <cstdlib>
using namespace std;
class Score
{
private:
	int points;
	
public:
	Score() { points = 0; }
	bool over21() { return points > 21; }
	int to21() { return 21 - points; }
	void hit() { 
		points += rand() % 6 + 1;	
	
	}
};


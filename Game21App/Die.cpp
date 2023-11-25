#include "Die.h"

Die::Die() {
	sides = 6;
}

int Die::roll(int numberOfDice) 
{
	random_device engine;
	uniform_int_distribution<int> diceValue(1, sides);


}
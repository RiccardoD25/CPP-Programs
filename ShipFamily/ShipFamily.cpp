// ShipFamily.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Ship.h"
#include"CruiseShip.h"
#include"CargoShip.h"
using namespace std;
int main()
{
	Ship* myShips[3];
	myShips[0] = new Ship("Bird", "2010");
	myShips[1] = new CruiseShip("Sea Lion", "2020", 100);
	myShips[2] = new CargoShip("Mammoth", "2015", 10000.0);
	for (int i = 0; i < 3; i++)
		myShips[i]->print();
		cout << "Ship value: $" << myShip[i]->getValue() << endl;
		total += myShip[i]->getValue();


		}
}		
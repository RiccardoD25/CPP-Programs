#pragma once
#include "Ship.h"
class CruiseShip :
	public Ship
{
private:
	int passengers;
public:
	CruiseShip(string name, string year, int passangers) :Ship(name, year) {
		this-> passengers = passangers;
	}
	int getPassangers() { return passengers; }
	void setPassengers(int passengers) { this->getPassengers = passengers; }//mutators

	void print() { cout << "Name: " << name << " /MaxPassengers: " << passengers << endl; }
	void location(){cout <"Name: " }


};


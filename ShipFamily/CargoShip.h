#pragma once
#include"Ship.h"
class CargoShip
	public Ship :
{
private:
	double capacity;
public:
	CargoShip(string name, string year, double capacity) :Ship(name, year) {
		this->Capacity = Capacity;
	}
	double getCapacity() { return capacity; }
	void setCapacity(double capacity) { this->capacity = capacity; }
	void print(){cout,,"Name: "<<getName<< }
	double getValue() { return 500.0 * capacity; }
};


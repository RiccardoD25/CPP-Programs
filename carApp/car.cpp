// Implementation file for the car class.
#include "car.h" // Needed for thr car class
#include<iostream> // Needed for the cout
#include<cstdlib> // Needed for the exit function
using namespace std;

Car::Car()
{
	yearModel = 0;
	make = "Tesla";
	speed = 0;
}
Car::Car(int y, string m)
{
	yearModel = y;
	make = m;
	speed = 0;
}
void Car::setYearModel(int y)
{
	yearModel = y;
}
void Car::setMake(string m)
{
	make = m;
}
void Car::setSpeed(int s)
{
	speed = s;
}
int Car::getYearModel() const
{
	return yearModel;
}
string Car::getMake() const
{
	return make;
}
int Car::getSpeed() const
{
	return speed;
}
void Car::accelerate()
{
	speed += 5;
}
void Car::brake()
{
	speed -= 5;
}
// Implementation file for the car class.
#include "pet.h" // Needed for thr car class
#include<iostream> // Needed for the cout
#include<cstdlib> // Needed for the exit function
using namespace std;

Pet::Pet()
{
	name = 0;
	type = "German Sheperd";
	age = 0;
}
Pet::Pet(int y, string m)
{
	name = y;
	type = m;
	age = 0;
}
void Pet::setName(int y)
{
	name = y;
}
void Pet::setType(string m)
{
	type = m;
}
void Pet::setAge(int s)
{
	age = s;
}
int Pet::getName() const
{
	return name;
}
string Pet::getType() const
{
	return type;
}
int Pet::getAge() const
{
	return age;
}

void Pet::gender()
{
	age += 5;
}

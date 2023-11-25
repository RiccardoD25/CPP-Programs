#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

// Car Class declaration

class Car
{
private:
	int yearModel;
	string make;
	int speed;
public:
	// Contructors
	Car();
	Car(int y, string m);
	void setYearModel(int);
	void setMake(string);
	void setSpeed(int);
	int getYearModel() const;
	string getMake() const;
	int getSpeed() const;
	void accelerate();
	void brake();


};
#endif


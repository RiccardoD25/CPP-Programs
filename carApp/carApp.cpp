// carApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "car.h"

int main()
{
	int yearModel; // Local variable for yearModel
	string make;   // Local variable for make
	int speed;     // Local variable for speed

	cout << "Enter model year: ";
	cin >> yearModel;

	cout << "Enter make: ";
	cin >> make;

	// Define a instance of the car class
	Car Car = Car (yearModel, make),

	// Show values for this car
	cout << "\n\nThe car yearModel is " << car.getYearModel() << endl;
	cout << "The car name is " << Car.getMake() << endl;
	// Show speed after 5 accelerations
	for (int i = 1; i <= 5; i++)
	{
		Car.accelerate();
	}
	cout << "The car speed after 5 accelerations is " << car.getSpeed() << endl;

	// Show speed after 5 brakes
	for (int i = 1; i <= 5; i++)
	{
		car.brake();
	}

	cout << "The car speed after 5 brakes is " << car.brake() << endl;

	return 0;
}




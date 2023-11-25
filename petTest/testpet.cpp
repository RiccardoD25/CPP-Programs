// petTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
// COP1334C Intro To C++
// Luis Rios

#include "pet.h"
#include <string>


int main()
{
	int a;
	string n, t;
	cout << "Enter a pet name :";				 //read inputs from user
	std::getline(cin, n);
	cout << "Enter a pet type :";
	std::getline(cin, t);
	cout << "Enter a pet age :";
	cin >> a;
	cout << "\n";
	Pet p(n, t, a);								//create object and display attributes
	cout << "The pet name is " << p.getName();
	cout << "\n";
	cout << "The pet type is " << p.getType();
	cout << "\n";
	cout << "The pet age is " << p.getAge();
	return 0;
}
// RectangleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	Rectangle r1;
	Rectangle r2;
	r1.setWidth(5.5);
	r1.setLength(2.7);
	r2.setWidth(1.9);
	r2.setLength(3.8);
	cout << "r1: width " << r1.getWidth() << "length " << r1.getLength() << endl;
	cout << "r2: width " << r2.getWidth() << "length " << r2.getLength() << endl;
	cout << "r2: area " << r2.getArea() << endl;

}  

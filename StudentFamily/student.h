#pragma once
#include<iostream>
using namespace std;
class student
{
private:
	string name;
	double gpa;
	
public:
	student() {
		name = "none";
		gpa = 0.0;
	}
	double getGpa() {return gpa;}
};


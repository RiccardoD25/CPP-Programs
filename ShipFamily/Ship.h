#pragma once
#include<iosteam>
using namespace std;
class Ship

{
private:
	string name, year;
public:
	Ship(string name, string year) {
		this->name = name;
		this->year = year;
	}
	//accessors
	string getName() { return name; }
	string getYear() { return year; }
	void setName(string name) { this->Name = name; }
	void setYear(string year) { this->year = name; }
	//print
	virtual void print(){cout << "Name: "<< }
};


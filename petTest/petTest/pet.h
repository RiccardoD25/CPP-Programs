#ifndef PET_H
#define PET_H

#include <iostream>
using namespace std;

class Pet {							  //class defnition
	int age;
	string name;
	string type;

public:
	Pet(string n, string t, int a) { //pet constructor of class
		this->age = a;	
		this->name = n;
		this->type = t;
	}
	void setAge(int a) {			//setter methods
		this->age = a;
	}
	void setName(string a) {
		this->name = a;
	}
	void setType(string a) {
		this->type = a;
	}
	int getAge() {					//getter methods
		return this->age;
	}
	string getType() {
		return this->type;
	}
	string getName() {
		return this->name;
	}
};
#endif 
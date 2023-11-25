#pragma once
#include<string>
using namespace std;
class ProductionWorker
{
private: //data members or fields
	string id, name;
	int hours;
	double hourPayRate, income;
public: // interactions with other programs
	// constructors
	// no-arg constructor
	ProductionWorker();
	// a parameter contructor
	ProductionWorker(string myID, string myName, int myHours, double myHPR);
	// accessors
	string getID() { return id; }
	string getName() { return name; }
	int getHours() { return hours; }
	double getHPRate() { return hourPayRate; }
	double getIncome() { return income; }
	// mutators
	void setId(string myId) { id = myId; }
	void setName(string myName) { name = myName; }
	void setHours(int myHours);
	void setHPR(double myHPR);
	// other functions 
private:
	void grossIncome() { hours * hourPayRate; }

};


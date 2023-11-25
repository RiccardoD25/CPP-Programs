

#include <iostream>
#include "ProductionWorker.h"
using namespace std;
int main()
{
	ProductionWorker p1("A001", "Peter", 40, 20.0);
	cout << p1.getName() << " works " << p1.getHours() << " hours " << endl;
	cout << p1.getName() << " income is $ " << p1.getIncome() << endl;
};
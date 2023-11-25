#include "ProductionWorker.h"

ProductionWorker::ProductionWorker() {
	id = "my id";
	name = "John Doe";
	hours = 0;
	hourPayRate = 0.0;
	grossIncome();
}
ProductionWorker::ProductionWorker(string myId, string myName, int myHours, double myHPRate) {
	id = myId;
	name = myName;
	hours = myHours;
	hourPayRate = myHPRate;
	grossIncome();
}
void ProductionWorker::setHours(int myHours) {
	if (myHours >= 0)
		hours = myHours;
		grossIncome();
}
void ProductionWorker::setHPR(double myHPRate) {
	if (myHPRate >= 0.0)
		hourPayRate = myHPRate;
		grossIncome();
}
// dayOfTheWeek.cpp : This file contains the 'main' function. Program execution begins and ends there.
// COP1334C INTRO TO C++
// Assignment 2
// Riccardo De Simini

#include <iostream>
using namespace std;

int main() 

{
	//CPP will calculate the days of the week, years, months
	int h, q, k, j, year, m;
	string days[] = { "Saturday","Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };

	//User enters a year (e.g. 1990 - 2022)
	cout << "Enter year: (e.g., 2012): ";
	cin >> year;

	//User enters a months (e.g. january - december)
	cout << "Enter month: 1-12: ";
	cin >> m;

	//User enters a day of the month (e.g. 1-31)
	cout << "Enter the day of the month: 1-31: ";
	cin >> q;

	//CPP will output the day based on the calculation of the input provided
	if (m == 1 || m == 2) {
		year -= 1;
		m = (m == 1) ? 13 : 14;

	}

	j = year / 100;
	k = year % 100;
	h = (q + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;

	//CPP will output the exact day from input of the user
	cout << "Day of the week is " << days[h] << endl;

	system("pause>0");
	return 0;
}
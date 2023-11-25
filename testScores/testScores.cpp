// testScores.cpp : This file contains the 'main' function. Program execution begins and ends there.
// COP1334C Intro to C++
// Riccardo De Simini

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(double*, int);
void selectionSort(double *, int);
double getAverage(double *, int);
void displayData(double *, int, double);

int main()
{
	double * Test,		// To dynamically allocate an array
		Average;		// To hold the average of the scores
	int Scores;			// To hold number of scores


	// Get number of scores
	cout << "How many test scores will you enter? ";
	cin >> Scores;

	// Dynamically allocate an array larger enough
	// to hold the user-defined number of scores
	Test = new double[Scores];	// Allocate memory

	getData(Test, Scores);

	selectionSort(Test, Scores);

	Average = getAverage(Test, Scores);

	displayData(Test, Scores, Average);

	return 0;
}


// getData                                   
// This function asks user to input test scores that are stored in an array. 
// The parameter Scores holds the number of test score to be input.           

void getData(double* Test, int Scores)
{
	cout << "Enter each of the scores.\n";
	for (int i = 0.00; i < Scores; i++)
	{
		do
		{
			cout << "Score #" << (i + 1) << ": ";
			cin >> *(Test + i);

			if (*(Test + i) < 0.00)
			{
				cout << "Negative scores are not allowed.\n"
					<< "Enter another score for this test, ";
			}

		} while (*(Test + i) < 0.00);
	}
}

// SelectionSort                                  
// This function performs an ascending-order selection sort on the Test array 
// The paramere Scores holds the number of scores in the array.               

void selectionSort(double* Test, int Scores)
{
	int startscan, minIndex;
	double minValue;

	for (startscan = 0.00; startscan < (Scores - 1); startscan++)
	{
		minIndex = startscan;
		minValue = *(Test + startscan);
		for (int i = startscan + 1; i < Scores; i++)
		{
			if (*(Test + i) < minValue)
			{
				minValue = *(Test + i);
				minIndex = i;
			}

		}
		*(Test + minIndex) = *(Test + startscan);
		*(Test + startscan) = minValue;
	}
}

// getAverage                                   
// This function calculates the average of the scores stored in an array.     
// The parameter Scores holds the number of scores to average.                

double getAverage (double * Test, int Scores)
{
	double Total = 0.00;

	for (int i = 0.00; i < Scores; i++)
	{
		Total += *(Test + i);
	}
	cout << fixed << showpoint << setprecision(2);
	return Total / Scores;
}

// displayData
// This will output all input data                                 

void displayData(double* Test, int Scores, double Avg)
{
	cout << "\n";
	cout << "The test scores in ascending order, and their average, are:\n";
	cout << "\n";
	cout << "Scores: " << Scores << endl;
	cout << "----------\n";
	for (int i = 0.00; i < Scores; i++)
	{
		cout << "#" << (i + 1) << ": " << *(Test + i) << endl;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "\n";
	cout << "Average score: " << Avg << endl;
}
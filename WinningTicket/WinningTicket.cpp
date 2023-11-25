// WinningTicket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Header file section

#include <iostream>

using namespace std;

//Function prototype

bool Linearsearch(const int[], int, int);

const int SIZE = 10;

//Main function

int main()

{

	//Create and populate the array with the ticket numbers.

	int tickets[SIZE] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };

	//Variable declaration

	int winningNumber;

	bool result;

	//Prompt the user to enter the lottery ticket number

	cout << "Enter this week's 5-digit winning lottery number: ";

	cin >> winningNumber;

	//Call the Linearsearch function

	result = Linearsearch(tickets, SIZE, winningNumber);

	if (result == true)

		cout << "You have a winning ticket. " << endl;

	else

		cout << "You did not win this week. " << endl;

	return 0;

}

//Linearsearch function

bool Linearsearch(const int ticketnumbers[], int numElems, int ticketnumber)

{

	//Variable declaration

	int i = 0;

	//Run the while loop until the element is found in the array

	while (i < numElems)

	{

		//Compare each element of the array with the ticket number

		if (ticketnumbers[i] == ticketnumber)

		{

			//Return true if the ticket number is found in the array

			return true;

		}

		//Increment the i value

		i++;

	}

	//Return false if the ticket number is not found in the array

	return false;

}
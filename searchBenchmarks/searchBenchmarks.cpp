//searchBenchmarks.CPP
//COP1334C Intro To C++
//Riccardo De Simini


#include <iostream> // program includes  header files 

#include<fstream> // provides functions for opening files and appending into it

#include<cstdlib> // program includes general purpose functions like random number generation

#include<ctime> // transform one time to calendar local time

using namespace std; // program to distinguish from equivalent names or identifiers

// function to swap two variables having integer values
void swap(int* a, int* b) {
	// Note:[int a*] denotes a pointer to a variable whose datatype is integer

	int temp = *a; //storing in new variable


	*a = *b; // setting a to b

	*b = temp; // and setting b to stored value

}

// function for array sorting, the selection sort algorithm is employed 
//The key approach of the selection sorting algorithm is the selection and movement of the minimum
// element from the unsorted subarray to the sorted subarray during each iteration of the algorithm
void selectionSort(int array[], int size) {

	for (int step = 0; step < size - 1; step++) { //for loop to traverse through the whole array

		//  process to find the minimum element in right unsorted array

		int min_idx = step; // store step in min_idx 

		for (int i = step + 1; i < size; i++) { // traverse through index step+1

			if (array[i] < array[min_idx]) // check the current element in unsorted subarray is smaller than the first element

				min_idx = i; // if the condition satisfies store i in min_idx 
		}

		swap(&array[min_idx], &array[step]); // Now swap the found minimum element with the first element
	}
} // end of function


// function to search position of integer x in sorted array of length size
void binarySearch(int arr[], int size, int x)

{
	// define comparisonCount to count no. of comparisons
	// define left variable l of subarray
	// define right  variable r of subarray
	// define ntc variable 
	int comparisonCount = 1, l = 0, r = size - 1, ntc = 0;

	bool found = false; // define bool variable

	while (arr[ntc++] != x && ntc < size) // traversing through array arr

		comparisonCount++; // increase comparisonCount by one for each loop completion

	while (l <= r) { // condition for left less than equal to right

		int m = l + (r - l) / 2; // define middle element of subarray

		if (arr[m] == x) // if middle element is found to be x

		{

			found = true; // assign true to found

			break; //and break the loop

		}

		if (arr[m] < x) // if middle element is less than x

			l = m + 1; // shift left element to right of middle element

		else // if middle element is more than or equal x

			r = m - 1; // shift right element to left of middle element
	} 

		cout << "For binary search, number of comparisons: " << comparisonCount << endl;  //print total no of comparisons

	if (found) // condition if element is found (i.e found==true)

	{

		cout << "Number is found at position: " << comparisonCount - 1 << endl; // print position of found x

	}

	else // else if x is not found

		cout << "Search failed" << endl; // print "Search failed"

}


//driver code to execute program  
int main()

{

	const string filename = "numbers.txt"; // define string variable "numbers.txt"

	const int SIZE = 100; // define constant size of array

	int arr[SIZE], num; // define array arr and cariable num

	ofstream outfile(filename); // program for writing into the txt file 

	srand(time(0)); // sets the starting point for generation of a series of pseudo-random integers

	for (int i = 0; i < 100; i++) // traversing from 0 to 99 i.e 100 loops

		outfile << (rand() % 100 + 1) << endl; // write random generated numbers between 1 to 100 in the "numbers.txt" file

	ifstream infile(filename); // open the "numbers.txt" file

	int i = 0; // initiate i with 0

	while (!infile.eof()) // run loop until the file is being read completely to the end

		infile >> arr[i++]; // store integers from the file to arr variable 

	selectionSort(arr, SIZE); // sort the array by calling the selectionSort algorithm

		cout << "Enter number to find (1-100): "; // print "Enter number to find (1-100): "

		cin >> num; // taking integer input from user

	binarySearch(arr, SIZE, num); // call binarySearch function to search for the user input num integer

	return 1; // return the main function 

}
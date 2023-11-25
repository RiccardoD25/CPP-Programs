// PointersPart1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void duplicate(int myVar) {
    myVar = 2 * myVar;
}
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapWithPointers(int* aPtr, int* bPtr) {
    int temp;
    temp = *aPtr;
    *aPtr = *bPtr;
    *bPtr = temp;
}
int main()
{
    int a = 2, b = 3;
    int* aPtr = &a;
    int* bPtr = &b;
    //swapWithPointers(aPtr, bPtr);
    swapWithPointers(&a, &b);
    cout << "a: " << a << " b: " << b << endl;
  
}

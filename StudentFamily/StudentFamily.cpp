// StudentFamily.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "student.h"
#include "Undergrad.h"
using namespace std;
int main()
{
    student s1;
    cout << "s1 gpa: " << s1.getGpa() << endl;
    Undergrad u1;
    cout << "u1 gpa: " << u1.getGpa() << endl;
}


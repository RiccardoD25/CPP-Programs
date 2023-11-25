// mathTutor Assignment #3
// COP1334C INTRO TO C++
// Riccardo De Simini

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    // declare the variables.
    int choice, guess;

    // loop runs until user chooses to exit.
    while (true)
    {

        // display the menu
        cout << "\nMain menu\n1. Addition\n2. Subtraction\n3. Multiplication\n";
        cout << "4. Divison\n5. Exit\n";

        // user inputs of choices
        cout << "Enter a choice: ";
        cin >> choice;

        // user enters 5, the program Exit
        if (choice == 5)
            break;

        // generate two random numbers from 0 to 9
        // using the rand() inbuilt funtion.
        int number1 = rand() % (10);
        int number2 = rand() % (10);

        // switch executes different cases based on the 
        // user choice.
        switch (choice)
        {
        case 1: cout << "What is " << number1 << " + " << number2 << "?: ";
            cin >> guess;
            if (guess == (number1 + number2)) {
                cout << "Correct\n";
            }
            else
            {
                cout << "Your answer is wrong. The correct answer is ";
                cout << number1 + number2 << endl;
            }
            break;

        case 2:
            // in case if number1 is lesser then we 
            // generate a random number until it is greater than number2
            while (1)
            {
                if (number1 < number2)
                {
                    number1 = rand() % 10;
                }
                else {
                    break;
                }
            }
            cout << "What is " << number1 << " - " << number2 << "?: ";
            cin >> guess;
            if (guess == (number1 - number2)) {
                cout << "Correct\n";
            }
            else
            {
                cout << "Your answer is wrong. The correct answer is ";
                cout << number1 - number2 << endl;
            }
            break;

        case 3:
            cout << "What is " << number1 << " * " << number2 << "?: ";
            cin >> guess;
            if (guess == (number1 * number2)) {
                cout << "Correct\n";
            }
            else
            {
                cout << "Your answer is wrong. The correct answer is ";
                cout << number1 * number2 << endl;
            }
            break;

        case 4:
            // incase the number2 is 10
            // we generate a random number2 until it is greater than 0
            while (1)
            {
                if (number2 == 0)
                {
                    number2 = rand() % 10;
                }
                else {
                    break;
                }
            }
            cout << "What is " << number1 << " / " << number2 << "?: ";
            cin >> guess;
            if (guess == (number1 / number2)) {
                cout << "Correct\n";

            }
            else
            {
                cout << "Your answer is wrong. The correct answer is ";
                cout << number1 / number2 << endl;

            }
            break;

        default:
            cout << "Invalid choice!.\n";

        }

    }
    system("pause>0");
    return 0;
}
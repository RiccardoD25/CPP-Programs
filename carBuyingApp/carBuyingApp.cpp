// carBuyingApp.cpp - Assginment #4: This file contains the 'main' function. Program execution begins and ends there.
// COP1334C INTRO TO C++
// Riccardo De Simini

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double getPayment(double principal, double rate, int term);

int main()
{
    // The main function is the driver function. It calls the getPayment function twice.
   // The getPayment function is a value-returning function. It takes three parameters: principal, rate, and term.
    double carPrice, rebate, creditUnionRate, dealerRate, creditUnionPayment, dealerPayment;
    int term;

    cout << "Car price (after any trade-in): ";
    cin >> carPrice;
    cout << "Rebate: ";
    cin >> rebate;
    cout << "Credit union rate: ";
    cin >> creditUnionRate;
    cout << "Dealer rate: ";
    cin >> dealerRate;
    cout << "Term in years: ";
    cin >> term;
    // The getPayment function returns the monthly payment.
    // The main function calls the getPayment function to calculate the credit union payment.
    // The main function calls the getPayment function to calculate the dealer payment.
    creditUnionPayment = getPayment(carPrice - rebate, creditUnionRate / 12, term * 12);
    dealerPayment = getPayment(carPrice, dealerRate / 12, term * 12);

    cout << fixed << showpoint << setprecision(2);
    cout << "Credit union payment: $" << creditUnionPayment << endl;
    cout << "Dealer payment: $" << dealerPayment << endl;

    return 0;
}
// The main function asks the user to enter the car price, rebate, credit union rate, dealer rate, and term.
double getPayment(double principal, double rate, int term)
{   
  //  The main function displays the credit union paymentand the dealer payment.
    return principal * rate / (1 - pow(rate + 1, -term));
}










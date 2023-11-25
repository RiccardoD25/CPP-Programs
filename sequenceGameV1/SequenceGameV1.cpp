// SequenceGameV1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Riccardo De Simini Unit 1 Assignment

#include <iostream>
using namespace std;
void showPath(int pos);
int main()
{
    // game path
    int path[7] = { +1,2,3,-1,2,-1,0 };
    // player position
    int pos = 0;
    showPath(pos);
    while (pos != 6) {
        cout << "Player is at position " << pos << endl;
        showPath(pos);
        pos = pos + path[pos];
    }
    showPath(pos);
    cout << "Player won " << endl;
}

void showPath(int pos) {
    for (int i = 0; i < 7; i++) {
        if (i == pos)
            cout << "|P";
        else
            cout << "|";
    }
    cout << "|" << endl;
}


/*
CSC 134
M4LAB1 - Asterisk Block
claypoolb
10/26/2025

This program asks the user for the height and width
of a block. Then it prints a rectangle made of asterisks
(*) using nested loops.
*/

#include <iostream>
using namespace std;

int main() {

    // variables
    int height;
    int width;

    // get input from the user
    cout << "Enter block height: ";
    cin >> height;

    cout << "Enter block width: ";
    cin >> width;

    cout << "\nYour block:\n\n";

    // outer loop: repeats once per row
    for (int i = 0; i < height; i++) {

        // inner loop: prints one row of stars
        for (int j = 0; j < width; j++) {
            cout << "* ";
        }

        // after finishing one full row, go to next line
        cout << endl;
    }

    cout << "\nDone." << endl;

    return 0;
}

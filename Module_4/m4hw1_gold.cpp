// CSC 134
// M4HW1 - Multiplication Table (Gold)
// claypoolb
// 11/02/2025

#include <iostream>
using namespace std;

int main() {
    int num;

    // Ask user until valid number (1–12)
    cout << "Enter a number from 1 to 12: ";
    cin >> num;

    while (num < 1 || num > 12) {
        cout << "Invalid input. Please enter a number from 1 to 12: ";
        cin >> num;
    }

    // Once valid, print the times table
    int count = 1;
    while (count <= 12) {
        cout << num << " times " << count << " is " << (num * count) << "." << endl;
        count++;
    }

    return 0;
}

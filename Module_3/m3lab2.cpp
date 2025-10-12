/*
CSC 134
M3LAB2 - Number Grade to Letter Grade Conversion Program
claypoolb
10/12/2025
Program to convert a numerical grade into a letter grade.
*/

#include <iostream>
using namespace std;

int main() {
    // Variable for the numerical grade
    double grade;

    // Ask user for input
    cout << "Enter your numerical grade: ";
    cin >> grade;

    cout << endl; // Blank line for readability

    // Check which letter grade applies
    if (grade >= 90 && grade <= 100) {
        cout << "Your letter grade is: A" << endl;
    } 
    else if (grade >= 80 && grade <= 89) {
        cout << "Your letter grade is: B" << endl;
    } 
    else if (grade >= 70 && grade <= 79) {
        cout << "Your letter grade is: C" << endl;
    } 
    else if (grade >= 60 && grade <= 69) {
        cout << "Your letter grade is: D" << endl;
    } 
    else if (grade >= 0 && grade <= 59) {
        cout << "Your letter grade is: F" << endl;
    } 
    else {
        cout << "Invalid grade entered. Please enter a value between 0 and 100." << endl;
    }

    cout << endl; // Final blank line for spacing

    return 0;
}

// CSC 134
// M3HW1 - Gold (Q4 Only)
// Brandon Claypool
// 10/19/2025
// Q4: Math practice — random single-digit addition.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));  // seed RNG once

    int a = rand() % 10;  // 0–9
    int b = rand() % 10;  // 0–9

    cout << "What is " << a << " plus " << b << "?" << endl;

    int user_answer = 0;
    cin >> user_answer;

    int correct = a + b;
    if (user_answer == correct) {
        cout << "Correct." << endl;
    } else {
        cout << "Incorrect." << endl;
    }

    return 0;
}

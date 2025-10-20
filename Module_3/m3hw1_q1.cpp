// CSC 134
// M3HW1 - Gold (Q1 Only)
// Brandon Claypool
// 10/19/2025
// Q1: Simple chatbot

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;

    string opinion;
    cin >> opinion;

    if (opinion == "yes" || opinion == "YES") {
        cout << "That's great! I'm sure we'll get along." << endl;
    } else if (opinion == "no" || opinion == "NO") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    } else {
        cout << "If you're not sure… that's OK." << endl;
    }

    return 0;
}

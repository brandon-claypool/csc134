// CSC 134
// M3HW1 - Gold (Q3 Only)
// Brandon Claypool
// 10/19/2025
// Q3: Harry Potter "Sorting Hat" — two-step quiz with nested ifs.

#include <iostream>
using namespace std;

int main() {
    cout << "🧙‍♂️ The Sorting Hat Quiz\n";
    cout << "Answer with numbers shown (1 or 2).\n\n";

    // First choice
    cout << "Q1) Which trait do you value more?\n";
    cout << "   1) Bravery\n";
    cout << "   2) Ambition\n";
    cout << "Your choice: ";

    int first = 0;
    cin >> first;

    if (first == 1) {
        // Second choice if picked Bravery
        cout << "\nQ2) Which sounds more like you?\n";
        cout << "   1) Chivalry & daring\n";
        cout << "   2) Wit & learning\n";
        cout << "Your choice: ";

        int second = 0;
        cin >> second;

        if (second == 1) {
            cout << "\n🦁 GRYFFINDOR!\n";
        } else if (second == 2) {
            cout << "\n🦅 RAVENCLAW!\n";
        } else {
            cout << "\nThe Hat is confused… try again later.\n";
        }

    } else if (first == 2) {
        // Second choice if picked Ambition
        cout << "\nQ2) What do you prefer?\n";
        cout << "   1) Hard work & loyalty\n";
        cout << "   2) Resourcefulness & cunning\n";
        cout << "Your choice: ";

        int second = 0;
        cin >> second;

        if (second == 1) {
            cout << "\n🦡 HUFFLEPUFF!\n";
        } else if (second == 2) {
            cout << "\n🐍 SLYTHERIN!\n";
        } else {
            cout << "\nThe Hat is confused… try again later.\n";
        }

    } else {
        cout << "\nThe Hat can’t sort without a clear choice.\n";
    }

    return 0;
}

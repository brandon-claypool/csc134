#include <iostream>
using namespace std;

int main() {
    int speed, hours;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    if (speed < 0) {
        cout << "Speed cannot be negative.\n";
        return 0;
    }

    cout << "How many hours has it traveled? ";
    cin >> hours;

    if (hours < 1) {
        cout << "Hours must be at least 1.\n";
        return 0;
    }

    cout << "Hour  Distance Traveled\n";
    cout << "-------------------------------\n";

    for (int h = 1; h <= hours; h++) {
        cout << " " << h << "   " << speed * h << endl;
    }

    return 0;
}

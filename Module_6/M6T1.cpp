/*
CSC 134
M6T1 - Loops and Arrays
claypoolb
12/3/2025
*/

#include <iostream>
#include <string>
using namespace std;

// Function declarations
void part1();
void part2();

// main
int main() {
    cout << "=== M6T1: Counting Cars at a Construction Site ===\n\n";

    part1();
    cout << "\n--------------------------------------\n\n";
    part2();

    return 0;
}


void part1() {
    cout << "Part 1: Count cars\n";
    cout << "Enter each day's car count." << endl;
    cout << "Day 1 = Monday, Day 5 = Friday\n\n";

    const int SIZE = 5;
    int day = 1;             
    int cars_today = 0;
    int total_cars = 0;
    double avg = 0.0;

    while (day <= SIZE) {

        // Determine weekday name based on the day number
        string day_name;
        if (day == 1)      day_name = "Monday";
        else if (day == 2) day_name = "Tuesday";
        else if (day == 3) day_name = "Wednesday";
        else if (day == 4) day_name = "Thursday";
        else               day_name = "Friday";

        cout << "Cars on " << day_name << " (Day " << day << "): ";
        cin >> cars_today;

        total_cars += cars_today;
        day++; // move to next day
    }

    avg = static_cast<double>(total_cars) / SIZE;

    cout << "\nTotal = " << total_cars << endl;
    cout << "Average = " << avg << endl;
}




void part2() {
    cout << "Part 2: Count cars using arrays + graph\n";

    const int SIZE = 5;
    string days[SIZE] = {"Mon", "Tue", "Wed", "Thu", "Fri"};
    int cars[SIZE];   // Stores car counts for each day

    int total = 0;
    double avg = 0.0;

    // --- INPUT LOOP ---
    for (int i = 0; i < SIZE; i++) {
        cout << "Cars on " << days[i] << ": ";
        cin >> cars[i];
    }

    // --- OUTPUT TABLE ---
    cout << "\nDay\tCars\n";
    cout << "-----------------\n";

    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t" << cars[i] << endl;
        total += cars[i];
    }

    avg = (double) total / SIZE;

    cout << "\nTotal cars: " << total << endl;
    cout << "Average per day: " << avg << endl;

    // --- ASCII BAR GRAPH ---
    cout << "\nASCII Graph (each * = 1 car)\n";

    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << " | ";
        for (int star = 0; star < cars[i]; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

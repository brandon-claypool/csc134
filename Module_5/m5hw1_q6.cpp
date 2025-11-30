#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// ===========================
// Function Prototypes
// ===========================
void question1(); // Average rainfall
void question2(); // Volume of a block
void question3(); // Roman numerals 1-10
void question4(); // Geometry calculator
void question5(); // Distance traveled

// ===========================
// main - Question 6 Menu
// ===========================
int main() {
    int choice;
    bool running = true;

    while (running) {
        cout << "\n==============================\n";
        cout << "          M5HW1 MENU\n";
        cout << "==============================\n";
        cout << "1. Question 1 - Average Rainfall\n";
        cout << "2. Question 2 - Block Volume\n";
        cout << "3. Question 3 - Roman Numerals (1-10)\n";
        cout << "4. Question 4 - Geometry Calculator\n";
        cout << "5. Question 5 - Distance Traveled\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice < 1 || choice > 6) {
            cout << "The valid choices are 1 through 6. "
                 << "Please select one of those.\n";
        } else {
            switch (choice) {
                case 1:
                    question1();
                    break;
                case 2:
                    question2();
                    break;
                case 3:
                    question3();
                    break;
                case 4:
                    question4();
                    break;
                case 5:
                    question5();
                    break;
                case 6:
                    cout << "Exiting program. Goodbye!\n";
                    running = false;
                    break;
            }
        }
    }

    return 0;
}

// ===========================
// Question 1 Function
// Average Rainfall for 3 Months
// ===========================
void question1() {
    string m1, m2, m3;
    double r1, r2, r3;

    cout << "\n[Question 1 - Average Rainfall]\n";

    cout << "Enter month: ";
    cin >> m1;
    cout << "Enter rainfall for " << m1 << ": ";
    cin >> r1;

    cout << "Enter month: ";
    cin >> m2;
    cout << "Enter rainfall for " << m2 << ": ";
    cin >> r2;

    cout << "Enter month: ";
    cin >> m3;
    cout << "Enter rainfall for " << m3 << ": ";
    cin >> r3;

    double avg = (r1 + r2 + r3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << m1 << ", " << m2 << ", and " << m3
         << " is " << avg << " inches.\n";
}

// ===========================
// Question 2 Function
// Volume of a Block
// ===========================
void question2() {
    double width, length, height;

    cout << "\n[Question 2 - Volume of a Block]\n";

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;

    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "Error: All sides must be greater than zero.\n";
        return;
    }

    double volume = width * length * height;
    cout << "The volume of the block is: " << volume << endl;
}

// ===========================
// Question 3 Function
// Roman Numerals 1-10
// ===========================
void question3() {
    int num;

    cout << "\n[Question 3 - Roman Numerals]\n";

    cout << "Enter a number (1 - 10): ";
    cin >> num;

    if (num < 1 || num > 10) {
        cout << "Error: Number must be between 1 and 10.\n";
        return;
    }

    cout << "The Roman numeral version of " << num << " is ";

    switch (num) {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
        case 10: cout << "X"; break;
    }

    cout << ".\n";
}

// ===========================
// Question 4 Function
// Geometry Calculator
// ===========================
void question4() {
    int choice;

    cout << "\n[Question 4 - Geometry Calculator]\n";

    cout << "Geometry Calculator\n"
         << "1. Calculate the Area of a Circle\n"
         << "2. Calculate the Area of a Rectangle\n"
         << "3. Calculate the Area of a Triangle\n"
         << "4. Quit\n"
         << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "The valid choices are 1 through 4. "
             << "Run the program again and select one of those.\n";
        return;
    }

    if (choice == 1) {
        double r;
        cout << "Enter the circle's radius: ";
        cin >> r;

        if (r < 0) {
            cout << "The radius cannot be less than zero.\n";
            return;
        }

        double area = 3.14159 * r * r;
        cout << "The area is " << area << endl;
    }
    else if (choice == 2) {
        double l, w;
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;

        if (l < 0 || w < 0) {
            cout << "Only enter positive values for length and width.\n";
            return;
        }

        cout << "The area is " << l * w << endl;
    }
    else if (choice == 3) {
        double b, h;
        cout << "Enter base: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;

        if (b < 0 || h < 0) {
            cout << "Only enter positive values for base and height.\n";
            return;
        }

        cout << "The area is " << (b * h * 0.5) << endl;
    }
    else if (choice == 4) {
        // Just return to the main menu
        cout << "Returning to main menu.\n";
        return;
    }
}

// ===========================
// Question 5 Function
// Distance Traveled
// ===========================
void question5() {
    int speed, hours;

    cout << "\n[Question 5 - Distance Traveled]\n";

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    if (speed < 0) {
        cout << "Speed cannot be negative.\n";
        return;
    }

    cout << "How many hours has it traveled? ";
    cin >> hours;

    if (hours < 1) {
        cout << "Hours must be at least 1.\n";
        return;
    }

    cout << "Hour  Distance Traveled\n";
    cout << "-------------------------------\n";

    for (int h = 1; h <= hours; h++) {
        cout << " " << h << "    " << speed * h << endl;
    }
}

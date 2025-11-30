// M5HW1 - Question 4
// claypoolb
// 11/29/2025
// This program gives the user the option to calculate the area of a circl, a rectangle, or a triangle

#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Geometry Calculator\n"
         << "1. Calculate the Area of a Circle\n"
         << "2. Calculate the Area of a Rectangle\n"
         << "3. Calculate the Area of a Triangle\n"
         << "4. Quit\n"
         << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "The valid choices are 1 through 4. Run the program again and select one of those.\n";
        return 0;
    }

    if (choice == 1) {
        double r;
        cout << "Enter the circle's radius: ";
        cin >> r;

        if (r < 0) {
            cout << "The radius cannot be less than zero.\n";
            return 0;
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
            return 0;
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
            return 0;
        }

        cout << "The area is " << (b * h * 0.5) << endl;
    }

    return 0;
}

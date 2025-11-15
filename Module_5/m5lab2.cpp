// M5LAB2 - Complete a Program
// claypoolb
// 11/14/2025
// This program gets the length and width of a rectangle,
// calculates the area using functions, and displays results.

#include <iostream>
using namespace std;

// FUNCTION PROTOTYPES
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // This program calculates the area of a rectangle.

    double length;   // The rectangle's length
    double width;    // The rectangle's width
    double area;     // The rectangle's area
          
    // Get the rectangle's length.
    length = getLength();
   
    // Get the rectangle's width.
    width = getWidth();
   
    // Get the rectangle's area.
    area = getArea(length, width);
   
    // Display the rectangle's data.
    displayData(length, width, area);
          
    return 0;
}

//***************************************************
// getLength - Get length from user
//***************************************************
double getLength() {
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

//***************************************************
// getWidth - Get width from user
//***************************************************
double getWidth() {
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

//***************************************************
// getArea - Calculate area
//***************************************************
double getArea(double length, double width) {
    return length * width;
}

//***************************************************
// displayData - Show formatted output
//***************************************************
void displayData(double length, double width, double area) {
    cout << "\nRectangle Data\n";
    cout << "--------------\n";
    cout << "Length: " << length << endl;
    cout << "Width : " << width << endl;
    cout << "Area  : " << area << endl;
}

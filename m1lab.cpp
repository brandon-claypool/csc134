/*
CSC 134
M1LAB for the online sections
claypoob
9/13/25
Program will advertise products for Jane Smith's
apple business.
*/

//magic words
#include <iostream>
using namespace std;

int main() {
    // Let's say hello
    string name = "Jane Smith";
    int apples = 100;
    double pricePerApple = 0.25;
    
    cout << "Welcome to " << name;
    cout << "'s apple farm" << endl;
    
    cout << "We have " << apples << " apples for sale" << endl;
    
    cout << "Price $" << pricePerApple << " each." << endl;

    // now calculate total price
    double totalPrice = (double) apples * pricePerApple;
    cout << "Total price is: $" <<totalPrice<< endl;
    
}




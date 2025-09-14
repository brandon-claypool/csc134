CSC 134
M1LAB
Claypool
9/13/25

#include <iostream>
using namespace std;

int main() {
    // This program will simulate an apple orchard
    // The owner's name
    string name = "Brandon Claypool";
    // number of apples owned
    int apples = 100;
    // price per apple
    double pricePerApple = 0.25;
    
    
    cout << "Welcome to " << name;
    cout << "'s apple farm" << endl;
    
    cout << "We have " << apples << " apples for sale" << endl;
    
    cout << "Price $" << pricePerApple << " each." << endl;

    //calculate the total price of the apples
    double totalPrice = (double) apples * pricePerApple;
    cout << "Total price is: $" <<totalPrice<< endl;
    
}




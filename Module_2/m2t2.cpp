/*
CSC 134
M2T2 - Receipt Calculator
claypoolb
9/23/2025
*/

#include <iostream>
#include <iomanip>  // for decimal places
using namespace std;

int main() {
    // Purpose - Create a simple receipt
    // should also handle sales tax (8%)

    // Declare our variables
    string item = "🍔 Cheeseburger";
    double item_price = 5.99;
    double tax_percent = 0.08; // 8% is 8/100
    double tax_amount;         // tax in $
    double total;              // price + tax


    // Greet user and take the order
    cout << "Welcome to our CSC 134 Restaurant!" << endl;
    cout << endl;
    cout << "You ordered one" << item << "." << endl;
    cout << endl;

    // Calculate the meal price
    // Calculate the sales tax and the total price
    tax_amount = item_price * tax_percent; // take 8% of the item
    total = item_price + tax_amount;

    // Print the receipt
    cout << setprecision(2) << fixed;
    
    cout << "-----------------------------" << endl;
    cout << item << "\t\t$" << item_price << endl;
    cout << endl;
    cout << "Tax" << "\t\t\t$" << tax_amount << endl;
    cout << "-----------------------------" << endl;
    cout << "Total" << "\t\t\t$" << total << endl;
    cout << endl;
    cout << endl;
    cout << "Thank you for dining with us!" << endl;
    cout << endl;
    cout << endl;

    
    return 0; //no errors
}
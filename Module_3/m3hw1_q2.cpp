// CSC 134
// M3HW1 - Gold (Q2 Only)
// Brandon Claypool
// 10/19/2025
// Q2: Receipt calculator that asks for meal price and whether it's dine-in (adds 15% tip) or takeaway (no tip).
// Prints itemized receipt: meal, tax, tip (if any), and total.

#include <iostream>
#include <iomanip>  // for fixed, setprecision
#include <string>
using namespace std;

int main() {
    // Constants
    const string restaurant_name = "Brandon's Burgers";
    const double TAX_RATE = 0.08;   // 8% sales tax
    const double TIP_RATE = 0.15;   // 15% tip for dine-in

    // Menu item label (you can change this if needed)
    string item = "🍔 Cheeseburger";

    // Inputs
    double item_price = 0.0;
    int mode = 0;  // 1 = dine-in, 2 = takeaway

    // Greeting / prompts
    cout << "Welcome to " << restaurant_name << "!\n\n";
    cout << "Enter the price of the meal (before tax/tip): $";
    cin >> item_price;

    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> mode;

    // Calculations
    double tax_amount = item_price * TAX_RATE;
    double tip_amount = (mode == 1) ? (item_price * TIP_RATE) : 0.0;
    double total = item_price + tax_amount + tip_amount;

    // Output receipt
    cout << fixed << setprecision(2);
    cout << "\n-----------------------------\n";
    cout << item << "\t\t$" << item_price << "\n\n";
    cout << "Tax\t\t\t$" << tax_amount << "\n";
    if (mode == 1) {
        cout << "Tip (15%)\t\t$" << tip_amount << "\n";
    } else {
        cout << "Tip\t\t\t$" << 0.00 << " (takeaway)\n";
    }
    cout << "-----------------------------\n";
    cout << "Total\t\t\t$" << total << "\n\n";
    cout << "Thank you for dining with us!\n\n";

    return 0; // no errors
}

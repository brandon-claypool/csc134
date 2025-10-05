/* CSC 134
M2HW1 - Gold - Question 2
claypoolb
10/05/25
Program to calculate volume, cost, customer charge, and profit
for any crate used by "General Crates, Inc.".
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        //Constants for cost and amount charged
        const double COST_PER_CUBIC_FOOT = 0.30;  //updated from 0.23 cost due to economic fluctuations
        const double CHARGE_PER_CUBIC_FOOT = 0.52; //updated from 0.50 charge due to economic fluctuations 

        // Variables
        double length, // The crate's length
        width,         // The crate's width
        height,        // The crate's height
        volume,        // The volume of the crate
        cost,          // The cost to build the crate
        charge,        // The customer charge for the crate
        profit;        // The profit made on the crate

    // Set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;

    // Prompt the user for the crate's length, width, and height
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate the crate's volume, the cost to produce it,
    // the charge to the customer, and the profit.
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display the calculated data.
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;
}

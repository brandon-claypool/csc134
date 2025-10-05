/* CSC 134
M2HW1 - Gold - Question 3
claypoolb
10/05/25
Pizza Party Calculator
*/

#include <iostream>
using namespace std;

int main() {

    cout << "Question 3";

    cout << "----- Pizza Party Calculator -----\n";
    cout << "Let's figure out how many pizzas are\n";
    cout << "needed for each person to have 3 slices.\n";

    int pizzas = 0, slices_per_pizza = 0, visitors = 0;
    cout << "How many pizzas are you planning to buy? ";
    cin >> pizzas;
    cout << "How many slices are there per pizza? ";
    cin >> slices_per_pizza;
    cout << "How many visitors? ";
    cin >> visitors;

    int total_slices = pizzas * slices_per_pizza;
    int needed = visitors * 3;
    int leftover = total_slices - needed;
    if (leftover < 0) leftover = 0; // "left over" can't be negative

    cout << "\n--- Pizza Summary ---\n";
    cout << "Total slices:    " << total_slices << "\n";
    cout << "Slices needed:   " << needed << "\n";
    cout << "Leftover slices: " << leftover << "\n\n";
    if (total_slices < needed) {
    cout << "\nYOU RAN OUT, YOU NEED MORE PIZZA!\n\n\n\n";
    }
    return 0;
}

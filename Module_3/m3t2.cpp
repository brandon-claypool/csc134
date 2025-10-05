/* CSC 134
M3T2
claypoolb
10/05/25
Program to simulate craps gambling
*/

#include <iostream>
#include <cmath>    // (not used, but kept to match the example)
#include <ctime>    // time(0) for seeding
using namespace std;

int main() {
    cout << "Let's roll some dice! (Craps - Pass Line)\n";

    // Establish a seed and psuedo-random number (wish I would have watched/read this before the last assignment lol)
    int seed = time(0);
    srand(seed);

    // Define the highest dice value, craps uses standard 6 side die (1-6)
    const int MAX = 6; // This is technically 0-5, but we'll fix that later

    // Getting a little fancy, looked into creatung a loop to ask to play "again"
    char again = 'y';
    while (again == 'y' || again == 'Y') {
        int roll1 = (rand() % MAX) + 1;  // This makes the numbers 1-6 instead of 0-5
        int roll2 = (rand() % MAX) + 1;  // This makes the numbers 1-6 instead of 0-5
        int total = roll1 + roll2;

        // Output the results of the roll
        cout << "\nCOME-OUT ROLL:\n";
        cout << "Die 1: " << roll1 << "  Die 2: " << roll2 << "  Total: " << total << endl;

        // Instant win/lose on come-out
        if (total == 7) {
            cout << "Lucky seven! You win!" << endl;
        }
        else if (total == 11) {
            cout << "Eleven is a winner!" << endl;
        }
        else if (total == 2) {
            cout << "Snake eyes! Too bad, you lose." << endl;
        }
        else if (total == 3) {
            cout << "Sorry, three is unlucky, you lose." << endl;
        }
        else if (total == 12) {
            cout << "Boxcars! Sorry, you lost." << endl;
        }
        
        // Now adding in the "point"
        else {
            // ----- POINT PHASE -----
            int point = total;  // Sets the point as the total of the roll from above, if it gets to hear, that assumes the previous conditions weren't met and its not 7,11,2,3,or12
            cout << "POINT is " << point << ". Roll until " << point
                 << " (win) or 7 (lose)..." << endl;

            // Now that the "point" is established, the program needs to "roll the dice" until either point is rolled or 7
            while (true) {
                roll1 = (rand() % MAX) + 1;
                roll2 = (rand() % MAX) + 1;
                total = roll1 + roll2;

                // Output the results of the roll and set "total" to the new value
                cout << "Rolled " << roll1 << " + " << roll2 << " = " << total << endl;

                // Compare the results of the "roll", if the total equals the "point", WINNER!, otherwise, keep going
                if (total == point) {
                    cout << "Hit the POINT! You win!" << endl;
                    break;
                }
                // If the total of the roll is 7, you lose
                else if (total == 7) {
                    cout << "Seven-out. You lose." << endl;
                    break;
                }
                // otherwise keep rolling
            }
        }
        // Now we can ask the player to play again, because its setup at the beginning with a loop, a "y" will return to the top, and "n" (or really any other character) will stop the program
        cout << "\nPlay another round? (y/n): ";
        cin >> again;
    }

    cout << "\nEXIT" << endl;
    return 0;
}

/* CSC 134
M3LAB1
claypoolb
10/05/25
Choices with the if statement - #DungeonMasterCoder
*/

#include <iostream>
using namespace std;

int main() {
    // This program asks the player to choose an action in a very simple combat scene.
    int choice;

    cout << "A wild goblin appears!" << endl;
    cout << "Do you FIGHT or RUN?" << endl;
    cout << "Type 1 to FIGHT, or 2 to RUN: ";
    cin >> choice;

    if (1 == choice) {
        cout << "You chose to fight!" << endl;
        cout << "You swing your sword... Critical hit! The goblin flees!" << endl;
    }
    else if (2 == choice) {
        cout << "You chose to run!" << endl;
        cout << "You escape safely, but the goblin steals a gold coin as you flee." << endl;
    }
    else {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

    cout << "Thanks for playing!\n\n" << endl; // runs no matter what
    return 0;
}

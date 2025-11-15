/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Brandon Claypool
11/14/2025

Started with instructor provided template
*/

// Function Prototypes

#include <iostream>
using namespace std;

void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
// TODO: add more choices here later

int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    cout << "Main Menu" << endl;
    cout << "You're standing in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, go home" << endl;
    cout << "4. [Quit]" << endl;

    cout << "Choose: ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        choice_front_door();
    } 
    else if (choice == 2) {
        choice_back_door();
    } 
    else if (choice == 3) {
        choice_go_home();
    } 
    else if (choice == 4) {
        cout << "Ok, quitting game." << endl;
        return;
    } 
    else {
        cout << "Invalid choice. Try again." << endl;
        cin.clear(); 
        cin.ignore(1000, '\n');
        main_menu(); // retry
    }
}

// -------- FUNCTION DEFINITIONS --------

void choice_front_door() {
    cout << "\nYou walk up to the front door." << endl;
    cout << "It's locked. The doorknob rattles loudly..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;

    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        choice_back_door();
    } else if (choice == 2) {
        choice_go_home();
    } else {
        cout << "Invalid choice, returning to the main menu." << endl;
        main_menu();
    }
}

void choice_back_door() {
    cout << "\nYou walk around the back of the house." << endl;
    cout << "The grass is overgrown and the backyard is strangely quiet." << endl;
    cout << "You find a half-open door leading into a dark kitchen..." << endl;

    cout << "\nDo you:" << endl;
    cout << "1. Enter the dark kitchen" << endl;
    cout << "2. Run back to the main menu" << endl;

    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nYou step inside... and the door slams shut behind you!" << endl;
        cout << "A cold breeze moves through the room." << endl;
        cout << "[End of this branch — add more later!]\n" << endl;
    } 
    else if (choice == 2) {
        main_menu();
    }
}

void choice_go_home() {
    cout << "\nYou decide that ghost hunting is not for you today." << endl;
    cout << "You turn around, head down the path, and walk home safely." << endl;
    cout << "Maybe next time you'll be braver." << endl;
    cout << "[End of this branch]\n" << endl;
}

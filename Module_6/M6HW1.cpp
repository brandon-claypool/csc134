/*
CSC 134
M6HW1 - Project Prototype
Brandon Claypool
11/14/2025

Started from M5LAB1 - Choose Your Own Adventure template
and expanded for M6HW1 Bronze/Silver/Gold.
*/

#include <iostream>
using namespace std;

// ---------------- GLOBAL GAME STATE ----------------
bool hasKey = false;     // Did the player find the rusty key?
bool gameOver = false;   // When true, the main loop ends

// ---------------- FUNCTION PROTOTYPES ----------------
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void talk_to_neighbor();

void kitchen_room();
void basement_room();
void end_good_escape();
void end_bad_cursed();

// ---------------- MAIN ----------------
int main() {
    cout << "M6HW1 - Haunted House Prototype" << endl;
    cout << "You are a rookie ghost hunter in training." << endl;
    cout << "Rumor says this old house hides a journal from a missing investigator.\n" << endl;

    main_menu();

    cout << "\nThanks for playing!" << endl;
    return 0;
}

// ---------------- MAIN MENU / FRONT OF HOUSE ----------------
void main_menu() {
    while (!gameOver) {
        cout << "======================================================" << endl;
        cout << " FRONT YARD - SPOOKY HOUSE" << endl;
        cout << "======================================================" << endl;
        cout << "You stand in front of a spooky old house at the edge of town." << endl;
        cout << "The wind howls and a storm rumbles in the distance." << endl;

        if (hasKey) {
            cout << "You feel the weight of a cold, rusty key in your pocket." << endl;
        }

        cout << "\nWhat do you want to do?" << endl;
        cout << "1. Try the front door" << endl;
        cout << "2. Sneak around back" << endl;
        cout << "3. Forget it, go home" << endl;
        cout << "4. Talk to the neighbor (NPC)" << endl;
        cout << "5. [Quit game]" << endl;

        cout << "\nChoose: ";
        int choice;
        cin >> choice;

        // Basic input validation
        if (!cin) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a number.\n" << endl;
            continue;
        }

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
            talk_to_neighbor();
        }
        else if (choice == 5) {
            cout << "Ok, quitting game." << endl;
            gameOver = true;
        } 
        else {
            cout << "Invalid choice. Try again.\n" << endl;
        }
    }
}

// ---------------- FRONT DOOR (LOCKED) ----------------
void choice_front_door() {
    cout << "\nYou walk up to the front door." << endl;
    cout << "The wood is warped and the brass doorknob is ice cold." << endl;
    cout << "You try it, but it barely rattles. It's completely locked." << endl;

    cout << "\nDo you:" << endl;
    cout << "1. Go around to the back of the house" << endl;
    cout << "2. Step away and go back to the front yard" << endl;

    cout << "Choose: ";
    int choice;
    cin >> choice;

    if (!cin) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Returning to the front yard.\n" << endl;
        return;
    }

    if (choice == 1) {
        choice_back_door();
    } else {
        cout << "You step back down the cracked stairs to the front yard.\n" << endl;
        // Just return to main menu loop
    }
}

// ---------------- BACK OF HOUSE / YARD ----------------
void choice_back_door() {
    cout << "\nYou slip quietly around to the back of the house." << endl;
    cout << "The grass is overgrown and the backyard is strangely quiet." << endl;
    cout << "A half-open door leads into a dark kitchen." << endl;
    cout << "Off to the side, you spot a rotting shed with its door barely hanging on.\n" << endl;

    cout << "Do you:" << endl;
    cout << "1. Enter the dark kitchen" << endl;
    cout << "2. Check the old shed (maybe something useful there)" << endl;
    cout << "3. Go back to the front yard" << endl;

    cout << "Choose: ";
    int choice;
    cin >> choice;

    if (!cin) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Returning to the front yard.\n" << endl;
        return;
    }

    if (choice == 1) {
        kitchen_room();
    } 
    else if (choice == 2) {
        if (!hasKey) {
            cout << "\nYou carefully pull the shed door open." << endl;
            cout << "Inside, among broken tools and spiderwebs, you find a rusty key." << endl;
            cout << "You wipe it off and put it in your pocket." << endl;
            hasKey = true;
        } else {
            cout << "\nYou check the shed again, but it's just dust and junk now." << endl;
            cout << "You already took the only useful thing: the key." << endl;
        }
        cout << "You head back toward the back door.\n" << endl;
    } 
    else if (choice == 3) {
        cout << "You quietly walk back to the front of the house.\n" << endl;
    } 
    else {
        cout << "You hesitate too long and a cold wind makes you shiver.\n";
        cout << "You decide to head back to the front yard.\n" << endl;
    }
}

// ---------------- NPC DIALOG (NEIGHBOR) ----------------
void talk_to_neighbor() {
    cout << "\nYou turn to the side and see an old man leaning on the fence." << endl;
    cout << "NEIGHBOR: \"Kid, that house isn't just spooky for fun.\"" << endl;
    cout << "NEIGHBOR: \"An investigator came here years ago and never came back.\"" << endl;
    cout << "NEIGHBOR: \"They say his journal is in the basement. "
            "If you find it and get out, you prove you're a real ghost hunter.\"" << endl;
    cout << "NEIGHBOR: \"He kept things locked up. If you want in, check the shed out back.\"" << endl;
    cout << "He gives you a worried look as thunder rolls overhead.\n" << endl;
}

// ---------------- GO HOME ENDING ----------------
void choice_go_home() {
    cout << "\nYou decide that ghost hunting can wait for another day." << endl;
    cout << "You turn around, head down the overgrown path, and walk home safely." << endl;
    cout << "Maybe next time you'll be braver... or smarter.\n" << endl;
    cout << "[ENDING: You went home early.]\n" << endl;
    gameOver = true;
}

// ---------------- KITCHEN ROOM ----------------
void kitchen_room() {
    cout << "\nYou step into the dark kitchen. The back door creaks shut behind you." << endl;
    cout << "Moonlight from a dirty window barely lights the room." << endl;
    cout << "There's a staircase leading down to a basement door.\n" << endl;

    cout << "In the kitchen you can:" << endl;
    cout << "1. Check the basement door" << endl;
    cout << "2. Look around the kitchen table" << endl;
    cout << "3. Go back outside to the backyard" << endl;

    cout << "Choose: ";
    int choice;
    cin >> choice;

    if (!cin) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "The house seems to warp around you. You stumble back outside.\n" << endl;
        return;
    }

    if (choice == 1) {
        // LOCK & KEY PUZZLE
        if (!hasKey) {
            cout << "\nYou walk down the stairs and try the basement door." << endl;
            cout << "It's locked tight. There is a keyhole, but you don't have a key." << endl;
            cout << "A chill runs down your spine. You hurry back up to the kitchen.\n" << endl;
        } else {
            cout << "\nYou walk down the stairs and try the rusty key in the lock." << endl;
            cout << "It fits perfectly. With a loud CLICK, the door swings open..." << endl;
            basement_room();
        }
    } 
    else if (choice == 2) {
        cout << "\nYou search the table and find a dusty note." << endl;
        cout << "\"Only the brave leave with the truth.\"" << endl;
        cout << "\"Only the foolish read what should stay buried.\"" << endl;
        cout << "You shiver and put the note back down.\n" << endl;
    } 
    else if (choice == 3) {
        cout << "\nYou push open the back door and step out into the cold night air.\n" << endl;
    } 
    else {
        cout << "\nYou freeze up, overwhelmed. A gust of cold air pushes you back outside.\n" << endl;
    }
}

// ---------------- BASEMENT ROOM (FINAL) ----------------
void basement_room() {
    if (gameOver) {
        return; // Just in case
    }

    cout << "\nYou step into the basement. The air is heavy and still." << endl;
    cout << "On an old table you see two things:" << endl;
    cout << " - A dusty leather journal with a broken strap." << endl;
    cout << " - A strange, glowing book that hums softly.\n" << endl;

    cout << "You remember the neighbor's words about the missing investigator's journal." << endl;
    cout << "This must be it... but that glowing book is tempting.\n" << endl;

    cout << "Do you:" << endl;
    cout << "1. Grab the leather journal and get out of here" << endl;
    cout << "2. Open the glowing book and read it" << endl;

    cout << "Choose: ";
    int choice;
    cin >> choice;

    if (!cin) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Your vision blurs as the room spins. When you come to, you're outside...\n" << endl;
        end_bad_cursed();
        return;
    }

    if (choice == 1) {
        end_good_escape();
    } else if (choice == 2) {
        end_bad_cursed();
    } else {
        cout << "\nYou hesitate, unable to decide." << endl;
        cout << "The glow from the book grows brighter and brighter..." << endl;
        end_bad_cursed();
    }
}

// ---------------- GOOD ENDING ----------------
void end_good_escape() {
    cout << "\nYou snatch up the leather journal and race back up the stairs." << endl;
    cout << "The house creaks and groans as if trying to hold you inside," << endl;
    cout << "but you burst out the back door and into the stormy night." << endl;
    cout << "Back in the front yard, the neighbor stares in shock as you hold up the journal." << endl;
    cout << "NEIGHBOR: \"Well I'll be... You actually did it.\"" << endl;
    cout << "You have proof of the missing investigator and a story no one will believe.\n" << endl;
    cout << "[ENDING: TRUE GHOST HUNTER - You found the journal and escaped!]\n" << endl;
    gameOver = true;
}

// ---------------- BAD / CURSED ENDING ----------------
void end_bad_cursed() {
    cout << "\nYou reach for the glowing book. The moment you touch it, the basement goes silent." << endl;
    cout << "Whispers flood your mind in a language you don't understand." << endl;
    cout << "The world fades, and your last thought is that the neighbor was right..." << endl;
    cout << "Some things in this house should have stayed buried." << endl;
    cout << "[ENDING: CURSED - No one ever sees you leave the house.]\n" << endl;
    gameOver = true;
}

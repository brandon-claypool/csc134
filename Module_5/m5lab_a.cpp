// CSC 134
// M5LAB_A
// claypoolb
// Military Sim RPG

#include <iostream>
#include <string>
using namespace std;

/*

EXERCISE 1: STAMINA REGENERATION

*/

void regenerateStamina() {

    int stamina = 30;
    int maxStamina = 100;

    cout << "\n============================================\n";
    cout <<   "      🪖 STAMINA REGENERATION DRILL\n";
    cout <<   "============================================\n\n";

    cout << "Starting Stamina: " << stamina << "/" << maxStamina << "\n\n";

    while (stamina < maxStamina) {
        stamina += 10;

        cout << "[";

        for (int i = 0; i < stamina / 10; i++) {
            cout << "█";
        }

        for (int i = 0; i < (maxStamina - stamina) / 10; i++) {
            cout << "░";
        }

        cout << "]  ";
        cout << stamina << "/" << maxStamina << endl;
    }

    cout << "\n✅ Stamina fully restored. Soldier is mission-ready.\n\n";
}

/*

EXERCISE 2: LEVEL-UP TRAINING TABLE

*/

void displayTrainingProgression() {

    cout << "\n===============================================\n";
    cout <<   "   🪖 SOLDIER TRAINING PROGRESSION (Lv 1–10)\n";
    cout <<   "===============================================\n\n";

    cout << "Level | Marksmanship | Endurance | Intelligence\n";
    cout << "------|--------------|-----------|--------------\n";

    for (int level = 1; level <= 10; level++) {

        int marksmanship = 10 + (level * 2);
        int endurance    = 8  + (level * 3);
        int intel        = 12 + (level * 1);

        cout << "  " << level
         << "   |      " << marksmanship
         << "       |     " << endurance
         << "     |      " << intel << endl;
    }

    int startMark = 10 + (1 * 2);
    int finalMark = 10 + (10 * 2);

    int startEnd  = 8 + (1 * 3);
    int finalEnd  = 8 + (10 * 3);

    int startIntel = 12 + (1 * 1);
    int finalIntel = 12 + (10 * 1);

    cout << "\n📈 TOTAL GROWTH FROM LEVEL 1 TO 10:\n";
    cout << " Marksmanship: +" << (finalMark - startMark) << endl;
    cout << " Endurance:    +" << (finalEnd - startEnd) << endl;
    cout << " Intelligence: +" << (finalIntel - startIntel) << endl;

    cout << "\n🎯 Exercise 2 Complete! Stat progression working.\n\n";
}

/*

EXERCISE 3: GEAR INVENTORY SEARCH

*/

void gearInventorySearch() {

    cout << "\n=============================================\n";
    cout <<   "     🪖 UNIT EQUIPMENT INVENTORY SEARCH\n";
    cout <<   "=============================================\n\n";

    const int NUM_ITEMS = 5;

    string gear[NUM_ITEMS] = {
        "Rifle",
        "Radio",
        "Med Kit",
        "NVGs",
        "Spare Ammo"
    };

    cout << "=== CURRENT GEAR LOADOUT ===\n";
    for (int i = 0; i < NUM_ITEMS; i++) {
        cout << (i + 1) << ". " << gear[i] << endl;
    }

    cin.ignore();
    string searchItem;
    cout << "\nEnter gear item to search for: ";
    getline(cin, searchItem);

    bool found = false;
    int position = -1;

    for (int i = 0; i < NUM_ITEMS; i++) {
        if (gear[i] == searchItem) {
            found = true;
            position = i;
            break;
        }
    }

    if (found) {
        cout << "\n✅ \"" << searchItem << "\" located in slot "
             << (position + 1) << ".\n";
    } else {
        cout << "\n❌ \"" << searchItem << "\" was NOT found in inventory.\n";
    }

    cout << "\n🎯 Exercise 3 Complete! Inventory search working.\n\n";
}

/*

MAIN MENU — RUN ANY EXERCISE

*/

int main() {

    int choice;

    cout << "==============================================================\n";
    cout << "      🪖 MILITARY TEXT RPG - Its Basically The Real Thing\n";
    cout << "==============================================================\n\n";

    cout << "1. Run Exercise 1 (Stamina Regeneration)\n";
    cout << "2. Run Exercise 2 (Training Progression)\n";
    cout << "3. Run Exercise 3 (Gear Inventory Search)\n";
    cout << "4. Run ALL Exercises\n";
    cout << "5. Exit\n\n";

    cout << "Enter choice: ";
    cin >> choice;

    cout << endl;

    switch (choice) {
        case 1:
            regenerateStamina();
            break;
        case 2:
            displayTrainingProgression();
            break;
        case 3:
            gearInventorySearch();
            break;
        case 4:
            regenerateStamina();
            displayTrainingProgression();
            gearInventorySearch();
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid selection.\n";
            break;
    }

    return 0;
}

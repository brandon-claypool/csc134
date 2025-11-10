/*
 * CSC 134 - M5LAB_A: Loop Fundamentals
 * Your Name Here
 * Date: November 9, 2025
 * 
 * Theme: Fantasy RPG
 * This program demonstrates three fundamental programming patterns:
 * 1. While loops (Health regeneration)
 * 2. For loops (Level progression)
 * 3. Arrays + loops (Inventory system)
 */

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void exercise1_HealthRegen();
void exercise2_LevelStats();
void exercise3_Inventory();
void displayMenu();

int main() {
    int choice;
    bool quit = false;
    
    cout << "========================================" << endl;
    cout << "   CSC 134 - M5LAB_A: Loop Fundamentals" << endl;
    cout << "   Fantasy RPG Character System" << endl;
    cout << "========================================" << endl << endl;
    
    while (!quit) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        
        switch(choice) {
            case 1:
                exercise1_HealthRegen();
                break;
            case 2:
                exercise2_LevelStats();
                break;
            case 3:
                exercise3_Inventory();
                break;
            case 4:
                cout << "Running all exercises..." << endl << endl;
                exercise1_HealthRegen();
                cout << endl;
                exercise2_LevelStats();
                cout << endl;
                exercise3_Inventory();
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                quit = true;
                break;
            default:
                cout << "Invalid choice. Please enter 1-5." << endl;
        }
        
        if (!quit) {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();
            cout << endl;
        }
    }
    
    return 0;
}

void displayMenu() {
    cout << "========================================" << endl;
    cout << "MAIN MENU" << endl;
    cout << "========================================" << endl;
    cout << "1. Exercise 1: Health Regeneration" << endl;
    cout << "2. Exercise 2: Level Up Stats" << endl;
    cout << "3. Exercise 3: Inventory System" << endl;
    cout << "4. Run All Exercises" << endl;
    cout << "5. Exit" << endl;
    cout << "========================================" << endl;
}

/*
 * EXERCISE 1: HEALTH REGENERATION (30 points)
 * Pattern: while (not done yet) { keep going }
 * 
 * This demonstrates a WHILE LOOP - we don't know exactly how many
 * iterations we need, we just know when to stop (when health is full)
 */
void exercise1_HealthRegen() {
    cout << "========================================" << endl;
    cout << "EXERCISE 1: HEALTH REGENERATION" << endl;
    cout << "========================================" << endl;
    
    // Step 1: Set up variables
    int health = 30;        // Starting health (low)
    int maxHealth = 100;    // Maximum health
    int healAmount = 10;    // Amount healed per rest cycle
    
    cout << "Your character is injured!" << endl;
    cout << "Starting Health: " << health << "/" << maxHealth << " HP" << endl;
    cout << "Resting to recover..." << endl << endl;
    
    // Step 2: The while loop - keeps going until health reaches max
    // The condition "health < maxHealth" is checked BEFORE each iteration
    while (health < maxHealth) {
        // Step 3: Heal inside the loop
        health += healAmount;  // Same as: health = health + healAmount
        
        // Make sure we don't go over max health
        if (health > maxHealth) {
            health = maxHealth;
        }
        
        // Step 4: Show progress after each heal
        cout << "Resting... Health: " << health << "/" << maxHealth << " HP";
        
        // Bonus: Visual health bar
        cout << " [";
        int bars = health / 10;  // Each bar represents 10 HP
        for (int i = 0; i < 10; i++) {
            if (i < bars) {
                cout << "█";  // Filled bar
            } else {
                cout << "░";  // Empty bar
            }
        }
        cout << "]" << endl;
    }
    
    // Step 5: Completion message (after the loop ends)
    cout << endl << "✓ Fully recovered!" << endl;
    cout << "Your character is ready for adventure!" << endl;
}

/*
 * EXERCISE 2: LEVEL UP STATS (35 points)
 * Pattern: for (start; keep going while; increment) { do this }
 * 
 * TODO: Implement this function
 */
void exercise2_LevelStats() {
    cout << "========================================" << endl;
    cout << "EXERCISE 2: LEVEL UP STATS" << endl;
    cout << "========================================" << endl;
    cout << "Character progression from Level 1 to 10" << endl << endl;
    
    // Step 1: Print table header (BEFORE the loop)
    cout << "Level | STR  | DEX  | INT" << endl;
    cout << "------|------|------|------" << endl;
    
    // Step 2: For loop from level 1 to 10
    // Breaking down: for (start at 1; keep going while <= 10; add 1 each time)
    for (int level = 1; level <= 10; level++) {
        
        // Step 3: Calculate stats for THIS level (using the formulas)
        int strength = 10 + (level * 2);
        int dexterity = 8 + (level * 3);
        int intelligence = 12 + (level * 1);
        
        // Step 4: Print one row of the table
        // Using formatting to align columns nicely
        cout << "  " << level;
        if (level < 10) cout << " ";  // Extra space for single digits
        cout << "  |  " << strength;
        if (strength < 10) cout << " ";
        cout << "  |  " << dexterity;
        if (dexterity < 10) cout << " ";
        cout << "  |  " << intelligence << endl;
    }
    
    // Step 5: Calculate and show total growth (AFTER the loop)
    cout << endl << "========================================" << endl;
    cout << "TOTAL GROWTH (Level 1 → Level 10):" << endl;
    cout << "========================================" << endl;
    
    // Level 1 starting stats
    int startStr = 10 + (1 * 2);   // = 12
    int startDex = 8 + (1 * 3);    // = 11
    int startInt = 12 + (1 * 1);   // = 13
    
    // Level 10 final stats
    int finalStr = 10 + (10 * 2);  // = 30
    int finalDex = 8 + (10 * 3);   // = 38
    int finalInt = 12 + (10 * 1);  // = 22
    
    // Calculate growth
    int strGrowth = finalStr - startStr;
    int dexGrowth = finalDex - startDex;
    int intGrowth = finalInt - startInt;
    
    cout << "Strength:     " << startStr << " → " << finalStr 
         << " (+" << strGrowth << ")" << endl;
    cout << "Dexterity:    " << startDex << " → " << finalDex 
         << " (+" << dexGrowth << ")" << endl;
    cout << "Intelligence: " << startInt << " → " << finalInt 
         << " (+" << intGrowth << ")" << endl;
}

/*
 * EXERCISE 3: INVENTORY SYSTEM (35 points)
 * Pattern: array[5] = {items} + loop through each item
 * 
 * This demonstrates ARRAYS + LOOPS together:
 * - Arrays store collections of data
 * - Loops let us search through them
 * 
 * CRITICAL CONCEPT: Arrays use 0-based indexing!
 * Array indices: [0] [1] [2] [3] [4]
 * Display to user: 1   2   3   4   5
 */


/*
 * EXERCISE 3: INVENTORY SYSTEM (35 points)
 * Pattern: array[5] = {items} + loop through each item
 * 
 * TODO: Implement this function
 */
void exercise3_Inventory() {
    cout << "========================================" << endl;
    cout << "EXERCISE 3: INVENTORY SYSTEM" << endl;
    cout << "========================================" << endl;
    
    // Step 1: Declare and initialize the array
    // This array has 5 elements at indices 0, 1, 2, 3, 4
    const int SIZE = 5;
    string equipment[SIZE] = {
        "Iron Sword",
        "Leather Armor",
        "Health Potion",
        "Magic Ring",
        "Rope"
    };
    
    // Step 2: Display all items using a for loop
    cout << "=== YOUR INVENTORY ===" << endl;
    for (int i = 0; i < SIZE; i++) {
        // Display as 1-5 for humans, but access array at 0-4
        cout << (i + 1) << ". " << equipment[i] << endl;
    }
    cout << endl;
    
    // Step 3: Get search term from user
    string searchTerm;
    cout << "Enter item name to search for: ";
    cin.ignore();  // IMPORTANT! Clear the input buffer
    getline(cin, searchTerm);  // Use getline to allow spaces in names
    
    // Step 4: Search through the array
    bool found = false;
    int position = -1;  // Will store where we found it
    
    // Loop through each item in the array
    for (int i = 0; i < SIZE; i++) {
        if (equipment[i] == searchTerm) {
            found = true;
            position = i;  // Remember the array index
            break;  // Stop searching once we find it
        }
    }
    
    // Step 5: Report the results
    cout << endl << "========================================" << endl;
    cout << "SEARCH RESULTS:" << endl;
    cout << "========================================" << endl;
    
    if (found) {
        // Item was found! Display in human-friendly format (1-5, not 0-4)
        cout << "✓ Found \"" << searchTerm << "\" in slot " 
             << (position + 1) << "!" << endl;
        cout << "  (Array index: " << position << ")" << endl;
    } else {
        // Item not found in inventory
        cout << "✗ \"" << searchTerm << "\" not found in inventory." << endl;
        cout << "  (Remember: search is case-sensitive!)" << endl;
    }
}

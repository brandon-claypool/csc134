/*
 * CSC 134 - M5LAB_A: Loop Fundamentals
 * claypoolb
 * Date: November 15, 2025
 * 
 * Theme: MilSim RPG
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
    int maxStamina = 100;
    int stamina = 30;   //this is the starting level of stamina
    cont int recoveryRate = 10;    //this will add 10 stamina points each iteration during the loop
    

    // Set characters to show the stamina bar
    string full = "█";  //this will show a filled segment of the stamina bar
    string empty = "░"; //this will show an empty segment of the stamina bar

    cout << "Recoverying Stamina..." << endl;

    // Now we establish the loop pattern
    // Psuedocode for this -
    // while (not at full stamina yet) {
    //      move closer to full
    //      show progress
    //}
    while (stamina < maxStamina) {
        // first we setup the "recovery of stamina"
        stamina += recoveryRate; // this takes the current stamina value and adds the recoveryRate value

        // now we need to make sure it doesn't go over the maxStamina, we wouldn't want God-Mode players
        if (stamina > maxStamina) {
            stamina = maxStamina;
        }

    }
    
    // Now we setup the visual output of the stamina bar
    cout << "[";

    // We need to establish how many full segments we need
    for (int i = 0; i < stamina / 10; i++) {
        cout << full;
    }
 
    // Now we need empty segments for the bar
    for (int i = 0; i < (maxStamina - stamina) / 10; i++) {
        cout << empty;
    }

    cout << "]";
    
   
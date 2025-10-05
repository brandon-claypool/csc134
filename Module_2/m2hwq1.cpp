/* CSC 134
M2HW1 - Gold - Question 1
claypoolb
10/05/25
Program to simulate banking transactions
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <random>
using namespace std;

int main() {
    cout << "Question 1";
    cout << "Welcome to FTCC Student Bank!\n";

    // Ask user for their name
    cout << "\nPlease enter the name on the account: \n\n";
    string name;
    getline(cin >> ws, name);   //googled this, original method failed to account for spaces in full names entered

    // Money inputs
    double starting_balance = 0.00, deposit = 0.00, withdrawal = 0.00;
    
    cout << "\nPlease enter the following amounts in USD($) \n";
    
    cout << "\nStarting account balance: \n";
    cin >> starting_balance;
    
    cout << "\nAmount of deposit: \n";
    cin >> deposit;
    
    cout << "\nAmount of withdrawal: \n";
    cin >> withdrawal;

    // Generate random 8-digit account number (Had to look this one up on google)
    random_device rd;
    int account_number = 10000000 + static_cast<int>(rd() % 90000000u);

    double final_balance = starting_balance + deposit - withdrawal;

    cout << fixed << setprecision(2);
    cout << "\n\n\n------- Account Summary -------\n";
    cout << "\nName on the account: " << name << "\n";
    cout << "\nAccount number: " << account_number << "\n";
    cout << "\nFinal account balance: $" << final_balance << "\n";
    cout << "\n----- THANK YOU FOR CHOOSING -----\n";
    cout << "------ FTCC STUDENT BANK! -------\n";
    cout << "------- HAVE A NICE DAY! -------\n\n\n\n";
    return 0;
}

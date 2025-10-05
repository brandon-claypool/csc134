/* CSC 134
M2HW1 - Gold - Question 4
claypoolb
10/05/25
Cheering-There's an app for that!
*/
#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "Question 4";

    // First let's establish the basic strings we will use in combinations
    string letsGo;
    letsGo   = "Let's go ";
    string school;
    school   = "FTCC";
    string team;
    team     = "Trojans";
    
    // Now lets establish what strings need concatenated for cheerOne and cheerTwo 
    string cheerOne;
    cheerOne = letsGo + school;
    string cheerTwo;
    cheerTwo = letsGo + team;

    // Now we output the concatenated strings to produce the needed output
    cout << cheerOne << "\n";
    cout << cheerOne << "\n";
    cout << cheerOne << "\n";
    cout << cheerTwo << "\n\n\n\n";
    return 0;
}

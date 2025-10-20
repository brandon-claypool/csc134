
/* CSC 134
M4T1 - 
claypoolb
10/19/25
While loop
*/


#include <iostream>
using namespace std;
  
int main() {
    // program 5-3
    // Using a simple while loop

    // Part 1, just say "hi" five times
    int number = 5;

    int i = 0;
    while (i < number) {
        cout << "Hello" << endl;
        //i = i + 1
        i++;
    }
    cout << "That's all!" << endl;

    // program 5-6
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER;
    // print a table header
    cout << "Number\tNumber Squared" << endl;

    while (num <= MAX_NUMBER) {
        cout << num << "\t" << num * num << endl;
        num++;
    }
 
    return 0; // done
}
// CSC 134
// M4HW1 - Multiplication Table (Bronze)
// claypoolb
// 11/02/2025

#include <iostream>
using namespace std;

int main() {
    int num = 5;        // fixed number for the bronze level
    int count = 1;      // start at 1

    // while loop to print 12 lines
    while (count <= 12) {
        cout << num << " times " << count << " is " << (num * count) << "." << endl;
        count++;
    }

    return 0;
}

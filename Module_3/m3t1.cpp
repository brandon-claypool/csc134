/* CSC 134
M3T1 - 
claypoolb
10/12/25
Program to 
*/

#include <iostream>
using namespace std;


int main() {

    // Variables
    double len1, wid1, len2, wid2; 

    // Ask user for the length and width
    cout << "What's the length of the first rectangle? ";
    cin >> len1;
    cout << "\nWhat's the width of the first rectangle? ";
    cin >> wid1;
    cout << "\nWhat's the length of the second rectangle? ";
    cin >> len2;
    cout << "\nWhat's the width of the second rectangle? ";
    cin >> wid2;

    // Find the area
    double area1 = len1 * wid1;
    double area2 = len2 * wid2;

    // Print the area
    cout << "\n\nArea of rectangle 1: " << area1 << endl;
    cout << "\nArea of rectangle 2: " << area2 << endl;

    // Determine which is bigger
    if (area1 > area2) {
        cout << "\n\nRectangle 1 has the larger area.\n\n\n";
    } else if (area2 > area1) {
        cout << "\n\nRectangle 2 has the larger area.\n\n\n";
    } else if (area1 == area2) {
        cout << "\n\nBoth rectangles have the same area.\n\n\n";
    }

    return 0;
}
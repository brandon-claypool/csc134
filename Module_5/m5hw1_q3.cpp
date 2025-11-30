#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number (1 - 10): ";
    cin >> num;

    if (num < 1 || num > 10) {
        cout << "Error: Number must be between 1 and 10.\n";
        return 0;
    }

    cout << "The Roman numeral version of " << num << " is ";

    switch (num) {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
        case 10: cout << "X"; break;
    }

    cout << ".\n";
    return 0;
}

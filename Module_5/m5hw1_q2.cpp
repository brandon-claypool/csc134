#include <iostream>
using namespace std;

int main() {
    double width, length, height;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;

    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "Error: All sides must be greater than zero.\n";
        return 0;
    }

    double volume = width * length * height;

    cout << "The volume of the block is: " << volume << endl;

    return 0;
}

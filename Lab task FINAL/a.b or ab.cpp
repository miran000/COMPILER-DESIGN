#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (input == "ab") {
        cout << "Valid string (accepted by RE = ab)" << endl;
    } else {
        cout << "Invalid string (rejected)" << endl;
    }

    return 0;
}

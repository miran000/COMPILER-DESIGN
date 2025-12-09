#include <iostream>
#include <string>
using namespace std;

bool isValidString(const string &input) {
    // Check each character
    for (char ch : input) {
        if (ch != 'a' && ch != 'b') {
            return false; // invalid if any character is not 'a' or 'b'
        }
    }
    return true; // valid if all characters are 'a' or 'b'
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isValidString(input)) {
        cout << "Valid string (accepted by RE = (a+b)*)" << endl;
    } else {
        cout << "Invalid string (rejected)" << endl;
    }

    return 0;
}


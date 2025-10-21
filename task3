#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    if (input.length() >= 2) {
        if (input[0] == '/' && input[1] == '/') {
            cout << "Single-line comment" << endl;
        }
        else if (input[0] == '/' && input[1] == '*') {
            cout << "Multi-line comment start" << endl;
        }
        else {
            cout << "Not a comment" << endl;
        }
    }
    else {
        cout << "Not a comment" << endl;
    }

    return 0;
}

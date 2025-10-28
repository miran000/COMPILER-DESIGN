#include <iostream>
#include <cctype>
using namespace std;

bool isValidIdentifier(const string &str) {

    if (str.empty() || (!isalpha(str[0]) && str[0] != '_')) {
        return false;
    }
    for (int i = 1; i < str.length(); i++) {
        if(!isalnum(str[0]) && str[i] != '_'){
            return false;
        }
    }
    return true;
}
int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;
    if (isValidIdentifier(input)) {
        cout << "The string is a valid identifier." << endl;
    } else {
        cout << "The string is not a valid identifier." << endl;
    }
    return 0;
}


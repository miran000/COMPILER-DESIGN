#include <iostream>
using namespace std;

int main() {
    string x;
    bool flag = true;

    cout << "Input = ";
    cin >> x;

    for (int i = 0; i < x.length(); i++) {
        if (x[i] < '0' || x[i] > '9') {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "Numeric constant" << endl;
    } else {
        cout << "Not numeric" << endl;
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

bool isArithmeticOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '=');
}

int main()
{
    string input;
    cout << "Enter input: ";
    getline(cin, input);

    int operatorCount = 0;
    for (char c : input)
    {
        if (isArithmeticOperator(c))
        {
            cout << "operator" << ++operatorCount << ": " << c << endl;
        }
    }

    if (operatorCount == 0)
    {
        cout << "No operators found." << endl;
    }

    return 0;
}

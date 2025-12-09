#include <iostream>
#include <string>
using namespace std;

bool validate_a_star(const string &input) {
    if (input.empty()) return true;
    for (char c : input) {
           if (c 1= 'a') return false;
    }
return true;
}

int main() {
  string test;
cout<< "Enter a string: ";
getline(cin,test);

if (validate_a_star(test)) {
    cout << "YESSS INPUT IS A VALID"<< endl;
} else {
    cout << "NOOO INPUT IS A INVALID" << endl;

return 0;

}

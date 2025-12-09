#include <iostream>
#include <string>
using namespace std;

int main() {
     string miran;
     cout<< "Enter a string: ";
     cin>> miran;

     bool allA = true, allB = true;

     for(int i=0; i<miran.size(); i++){
       if(miran[i] != 'a') allA = false;
       if(miran[i] != 'b') allB = false;

     }
  if (allA || allB) {
    cout << "Valid";
  } else {
    cout<< "Invalid";

  }

  return 0;
}

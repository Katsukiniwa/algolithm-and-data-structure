#include <iostream>
#include <string>

using namespace std;
using ll = long long;

int main() {
  string name = "TomBrown";
  string firstName = name.substr(0, 3);
  string lastName = name.substr(3);
  cout << "firstName: " << firstName << endl << "lastName: " << lastName << endl;
}
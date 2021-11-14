#include <iostream>
#include <unordered_map>
#include <iterator>

using namespace std;
using ll = long long;

int main() {
  unordered_map<string, int> um;

  um = {{"1st", 1},
        {"2nd", 2},
        {"3rd", 3}};

  cout << um.at("3rd") << endl;
  cout << um.find("4th")->first << endl;
  cout << um.end()->first << endl;
}
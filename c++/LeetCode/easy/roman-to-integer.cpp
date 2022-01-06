#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int res = 0;

  for (char i : s) {
    if (i == 'I') res += 1;
  }
}
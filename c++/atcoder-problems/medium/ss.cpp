#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
  string s;
  int o = 0;
  cin >> s;

  for (int i = 1; i < s.size(); ++i) {
    if ((s.size() - i) % 2 == 0) {
      if (s.substr(0, (s.size() - i) / 2) == s.substr((s.size() - i) / 2, (s.size() - i) / 2)) {
        o = s.size() - i;
        break;
      }
    }
  }

  cout << o << endl;
}
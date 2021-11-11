#include <iostream>

using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;

  ll N = 0, i =0;

  for (int j = 0; j < s.size(); j++) {
    if (s[j] == 'W') {
      N+= j - i;
      i++;
    }
  }

  cout << N << endl;
}
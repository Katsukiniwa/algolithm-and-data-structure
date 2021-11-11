#include <iostream>

using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;

  int i = 0;
  ll N = 0;

  for (char j : s) {
    if (j == 'W') {
      N += i--;
    }
    i++;
  }

  cout << N << endl;
}
#include <iostream>

using namespace std;

int main() {
  int s;
  cin >> s;
  int m, res = 0;
  m = s;
  if (m == 1 || m == 2 || m == 4) {
    cout << 4 << endl;
    return 0;
  }
  while (true) {
    if (m == 8) {
      break;
    }
    if (m % 2 == 1) {
      m = 3 * m + 1;
      ++res;
    } else {
      m = m / 2;
      ++res;
    }
  }
  cout << res + 5 << endl;
}
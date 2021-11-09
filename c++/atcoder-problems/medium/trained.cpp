#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a.at(i);

  /**
   * vは操作回数
   */
  int i = 0, v;
  for (v = 1; v < n; v++) {
    if (a.at(i) == 2) {
      break;
    } else {
      i = a.at(i) - 1;
    }
  }

  if (v == n) {
    cout << -1 << endl;
  } else {
    cout << v << endl;
  }

  return 0;
}
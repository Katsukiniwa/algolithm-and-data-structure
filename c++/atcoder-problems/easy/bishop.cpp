#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
  ll h, w;
  cin >> h >> w;
  ll res;
  if (h == 1 || w == 1) {
    cout << 1 << endl;
    return 0;
  }

  if (h % 2 == 0) {
    res = (h / 2) * w;
  } else {
    if (w % 2 == 0) {
      res = (h * w) / 2;
    } else {
      res = ((h * (w + 1)) / 2) - (h / 2);
    }
  }

  cout << res << endl;
}
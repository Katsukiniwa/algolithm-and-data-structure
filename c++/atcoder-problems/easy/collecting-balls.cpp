#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a.at(i);
  }

  int res = 0;
  for (int j = 0; j < n; ++j) {
    if (a.at(j) <= k - a.at(j)) {
      res += a.at(j);
    } else {
      res += k - a.at(j);
    }
  }

  cout << res * 2 << endl;
}
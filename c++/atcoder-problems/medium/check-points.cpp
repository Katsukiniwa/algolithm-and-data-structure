#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(n), c(m), d(m);
  for (int i = 0; i < n; ++i) cin >> a.at(i) >> b.at(i);
  for (int j = 0; j < m; ++j) cin >> c.at(j) >> d.at(j);

  for (int k = 0; k < n; ++k) {
    ll tmp = 1000000000000000000;
    int ans = 0;
    for (int i = 0; i < m; ++i) {
      ll res = abs(a.at(k) - c.at(i)) + abs(b.at(k) - d.at(i));
      if (res < tmp) {
        tmp = res;
        ans = i + 1;
      }
    }
    cout << ans << endl;
  }
}
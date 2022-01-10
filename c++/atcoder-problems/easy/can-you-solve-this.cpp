#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
  int n, m, c, ans = 0;
  cin >> n >> m >> c;
  vector<int> b(m);
  vector<vector<int>> a(n, vector<int>(m));
  for (int k = 0; k < m; ++k) {
    cin >> b.at(k);
  }
  for (int l = 0; l < n; ++l) {
    for (int i = 0; i < m; ++i) {
      cin >> a.at(l).at(i);
    }
  }

  for (int i = 0; i < n; ++i) {
    int tmp = 0;
    for (int j = 0; j < m; ++j) {
      tmp += a.at(i).at(j) * b.at(j);
    }
    if (tmp + c > 0) ++ans;
  }

  cout << ans << endl;
}
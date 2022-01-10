#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
  vector<vector<int>> a(3, vector<int>(3));
  int n;
  for (int l = 0; l < 3; ++l) {
    for (int i = 0; i < 3; ++i) {
      cin >> a.at(l).at(i);
    }
  }
  cin >> n;
  vector<int> b(n);
  for (int i = 0; i < n; i++) cin >> b.at(i);
  vector<int> row(3), column(3);

  bool res = false;
  for (int j = 0; j < n; ++j) {
    for (int i = 0; i < 3; ++i) {
      for (int k = 0; k < 3; ++k) {
        if (b.at(j) == a.at(i).at(k)) {
          ++row.at(i);
          ++column.at(k);
          if (row.at(i) == 3 || column.at(k) == 3) res = true;
        }
      }
    }
  }

  if (find(b.begin(), b.end(), a.at(0).at(0)) != b.end() && find(b.begin(), b.end(), a.at(1).at(1)) != b.end() &&
      find(b.begin(), b.end(), a.at(2).at(2)) != b.end()) {
    res = true;
  }
  if (find(b.begin(), b.end(), a.at(2).at(0)) != b.end() && find(b.begin(), b.end(), a.at(1).at(1)) != b.end() &&
      find(b.begin(), b.end(), a.at(0).at(2)) != b.end()) {
    res = true;
  }

  if (res) cout << "Yes" << endl;
  else cout << "No" << endl;
}
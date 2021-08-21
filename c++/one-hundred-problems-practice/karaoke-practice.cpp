#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  vector<vector<long long>> a(100, vector<long long>(100));
  vector<vector<int> > vv(5, vector<int>(5));
  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> a.at(i).at(j);
    }
  }
  long long temp, ans = 0;
  for (int k = 0; k < m; ++k) {
    for (int i = k + 1; i < m; ++i) {
      temp = 0;
      for (int j = 0; j < n; ++j) {
        temp += max(a.at(j).at(k), a.at(j).at(i));
      }
      ans = max(ans, temp);
    }
  }
  cout << ans;
}
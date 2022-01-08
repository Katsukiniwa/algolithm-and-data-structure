#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  for (int i = 0; i < n; ++i) {
    cin >> x.at(i);
  }

  sort(begin(x), end(x));
  int max = *max_element(x.begin(), x.end());

  int res = 1000000;
  int tmp = 0;
  for (int j = 0; j <= max; ++j) {
    for (int i = 0; i < n; ++i) {
      tmp += pow((x.at(i) - j), 2);
    }
    res = min(res, tmp);
    tmp = 0;
  }

  cout << res << endl;
}
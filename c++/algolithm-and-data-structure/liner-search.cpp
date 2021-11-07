#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
  int n, q, sum = 0;

  cin >> n;
  vector<int> s(n);
  for (int i = 0; i < n; ++i) cin >> s.at(i);

  cin >> q;
  vector<int> t(q);
  for (int j = 0; j < q; ++j) cin >> t.at(j);

  for (int k = 0; k < q; ++k) {
    for (int i = 0; i < n; ++i) {
      if (t.at(k) == s.at(i)) ++sum;
    }
  }

  cout << sum << endl;
}
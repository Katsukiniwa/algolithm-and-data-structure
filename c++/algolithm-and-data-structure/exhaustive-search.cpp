#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int k = 0; k < n; ++k) cin >> a.at(k);

  int q;
  cin >> q;
  vector<int> m(q);
  for (int l = 0; l < q; ++l) cin >> m.at(l);

  for (int i = 0; i < q; ++i) {
    string res = "no";
    for (int bit = 0; bit < (1 << n); ++bit) {
      int sum = 0;
      for (int j = 0; j < n; ++j) {
        if (bit & (1 << j)) {
          sum += a.at(j);
        }
      }

      if (m.at(i) == sum) res = "yes";
    }

    cout << res << endl;
  }
}
#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

int main() {
  int n, k, s = 0, t = 0;
  char c;
  cin >> n;
  string p, q, o;
  for (int i = 0; i < n; ++i) {
    cin >> c;
    p += c;
  }
  for (int j = 0; j < n; ++j) {
    cin >> c;
    p += c;
  }
  o = p, k = 0, sort(o.begin(), o.end());
  do {
    if (o == p) s = k;
    if (o == q) t = k;
    ++k;
  } while (next_permutation(o.begin(), o.end()));
  cout << abs(s - t) << endl;
}

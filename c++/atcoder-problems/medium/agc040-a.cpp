#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  vector<int> a(n + 1);

  // < >>> << > <<<<< >>> <
  // 0 3210 12 01 2345 210 1
  for (int i = 0; i < n; i++) {
    if (s[i] == '<') a[i + 1] = a[i] + 1;
  }
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] == '>') a[i] = max(a[i], a[i + 1] + 1);
  }

  for (int j : a) cout << j;

  ll ans = 0;
  for (int i : a) ans += i;
  cout << ans << endl;
}
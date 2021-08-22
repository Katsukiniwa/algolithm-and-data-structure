#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> k(m);
  vector<vector<ll>> s(m, vector<ll>(n));;
  for (int i = 0; i < m; ++i) {
    cin >> k.at(i);
    for (int j = 0; j < k.at(i); ++j) cin >> s[i][j];
  }
  vector<ll> p(m);
  for (int i = 0; i < m; i++) cin >> p[i];
  int ans = 0;
  for (int bit = 0; bit < (1 << n); ++bit) {
    int tmp = 0;
    for (int i = 0; i < m; ++i) {
      int cnt = 0;
      for (int j = 0; j < k[i]; ++j) {
        if (bit & (1 << (s[i][j] - 1))) ++cnt;
      }
      if (cnt % 2 == p[i]) ++tmp;
    }
    if(tmp == m) ++ans;
  }
  cout << ans << endl;
}
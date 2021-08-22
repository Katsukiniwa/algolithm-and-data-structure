#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> k(m);
  vector<vector<ll>> s;
  for (int i = 0; i < m; ++i) {
    cin >> k.at(i);
    for (int j = 0; j < k.at(i); ++j) cin >> s[i][j];
  }
  vector<ll> p(m);
  for (int i = 0; i < m; i++) cin >> p[i];
  int ans = 0;
}
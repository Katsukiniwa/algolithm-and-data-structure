#include <iostream>

using namespace std;
typedef long long ll;
ll n, m, a[110][110];

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++)for (int j = 0; j < m; j++)cin >> a[i][j];
  ll ans = 0;
  for (int i = 0; i < m; i++) {
    for (int j = i + 1; j < m; j++) {
      ll sum = 0;
      for (int k = 0; k < n; k++)sum += max(a[k][i], a[k][j]);
      ans = max(ans, sum);
    }
  }
  cout << ans;
  return 0;
}
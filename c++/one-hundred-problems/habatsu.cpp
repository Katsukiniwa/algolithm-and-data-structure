#include <iostream>
#include <vector>

using namespace std;
bool s[100][100];

int main() {
  int n, m, ans = 1;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    s[x][y] = true;
    s[y][x] = true;
  }
  for (int bit = 0; bit < (1 << n); bit++) {
    vector<int> G;
    for (int i = 0; i < n; i++) {
      if (bit & (1 << i)) {
        G.push_back(i + 1);
      }
    }
    int z = G.size();
    bool ok = true;
    for (int i = 0; i < z - 1; i++) {
      for (int j = i + 1; j < z; j++) {
        if (!s[G[i]][G[j]]) {
          ok = false;
        }
      }
    }
    if (ok) ans = max(ans, z);
  }
  cout << ans << endl;
}
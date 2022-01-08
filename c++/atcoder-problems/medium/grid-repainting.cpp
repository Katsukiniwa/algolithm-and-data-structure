#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

int main() {
  vector<string> c(55);
  int H, W, cnt = 0;
  cin >> H >> W;
  for (int i = 1; i <= H; i++) cin >> c[i];

  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      if (c[i][j] == '#' && c[i][j - 1] != '#' && c[i - 1][j] != '#' && c[i][j + 1] != '#' && c[i + 1][j] != '#') cnt++;
    }
  }
  if (cnt == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}
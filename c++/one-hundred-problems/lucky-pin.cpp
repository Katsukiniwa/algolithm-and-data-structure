#include <iostream>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  // 000~999は存在しえる暗証番号
  rep(i, 1000) {
    string t;
    int x = i;
    rep(j, 3) {
      t += '0' + x % 10;
      x /= 10;
    }
    cout << t;
    int ti = 0;
    rep(j, n) {
      if (s[j] == t[ti]) {
        ti++;
        if (ti == 3) break;
      }
    }
    if (ti == 3) ans++;
  }
  cout << ans << endl;
}
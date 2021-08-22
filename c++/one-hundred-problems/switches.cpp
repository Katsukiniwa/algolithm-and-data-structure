#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;
typedef long long ll;

int main() {
  int N, M;
  cin >> N >> M;
  int k[M];
  int s[M][N];
  for (int i = 0; i < M; i++) {
    cin >> k[i];
    for (int j = 0; j < k[i]; j++) {
      cin >> s[i][j];
    }
  }
  vector<int> p(M);
  for (int i = 0; i < M; i++) {
    cin >> p[i];
  }

  int ans = 0;

  // @link https://qiita.com/drken/items/7c6ff2aa4d8fce1c9361#6-bit-%E5%85%A8%E6%8E%A2%E7%B4%A2
  // {0, 1, ..., N-1} の部分集合の全探索
  // Nはスイッチの個数
  // sは1~Nのうちのどれか
  for (int bit = 0; bit < (1 << N); bit++) {
    // 点灯している電球の数
    int tmp = 0;
    for (int i = 0; i < M; i++) {
      // onになっているスイッチの個数
      int cnt = 0;
      // k[i]は電球に繋がっているスイッチの個数
      for (int j = 0; j < k[i]; j++) {
        // s[i][j] - 1 が bit に入るかどうか
        // bitにs[i][j] - 1番目のフラグが立っているかどうか
        // 電球には1からMの番号がついているので-1する？
        if (bit & (1 << (s[i][j] - 1))) {
          cnt++;
        }
      }
      if (cnt % 2 == p[i]) {
        tmp++;
      }
    }
    // 全ての電球が点灯していた場合のみインクリメント
    if (tmp == M) {
      ans++;
    }
  }
  cout << ans << endl;
}


int answer() {
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
  for (int bit = 0; bit < (1 << n); bit++) {
    int tmp = 0;
    for (int i = 0; i < m; i++) {
      int cnt = 0;
      for (int j = 0; j < k[i]; j++) {
        if (bit & (1 << (s[i][j] - 1))) ++cnt;
      }
      if (cnt % 2 == p[i]) ++tmp;
    }
    if (tmp == m) ++ans;
  }
  cout << ans << endl;
}

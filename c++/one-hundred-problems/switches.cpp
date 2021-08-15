#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

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
  for (int bit = 0; bit < (1 << N); bit++) {
    // 点灯している電球の数
    int tmp = 0;
    for (int i = 0; i < M; i++) {
      // onになっているスイッチの個数
      int cnt = 0;
      // k[i]は電球に繋がっているスイッチの個数
      for (int j = 0; j < k[i]; j++) {
        // s[i][j] - 1 が bit に入るかどうか
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

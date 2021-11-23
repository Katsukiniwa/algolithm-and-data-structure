#include <iostream>

using namespace std;
using ll = long long;

int main() {
  int h, w;
  cin >> h >> w;

  string board[50];

  for (int i = 0; i < h; ++i) cin >> board[i];

  const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
  const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      /**
       * 爆弾マスは飛ばす
       */
      if (board[i][j] == '#') continue;

      int num = 0;
      for (int d = 0; d < 8; ++d) {
        const int ni = i + dy[d];
        const int nj = j + dx[d];

        /**
         * 8箇所のうちboard配列外は無視する
         */
        if (ni < 0 or h <= ni) continue;
        if (nj < 0 or w <= nj) continue;
        if (board[ni][nj] == '#') num++;
      }
      /**
       * intをcharに変換して置換
       */
      board[i][j] = char(num + '0');
    }
  }

  for (int i = 0; i < h; ++i) cout << board[i] << endl;
  return 0;
}
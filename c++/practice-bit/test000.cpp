#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n = 5;

  // 1 << 3は、2の3乗を得るための式
  // 1を3ビット左シフトすると、ビット列は「1000」となり
  // これを2進数として解釈すると
  // 2の3乗=8になります。
  // 2のk乗の値を得るために、1 << kという書き方をすることがよくあります。
  // {0, 1, ..., n-1} の部分集合の全探索
  for (int bit = 0; bit < (1 << n); ++bit) {
    /* bit で表される集合の処理を書く */

    /* きちんとできていることを確認してみる */
    // bit の表す集合を求める
    vector<int> S;
    for (int i = 0; i < n; ++i) {
      if (bit & (1 << i)) { // i が bit に入る(含まれている)かどうか
        S.push_back(i);
      }
    }

    // bit の表す集合の出力
    cout << bit << ": {";
    for (int i : S) {
      cout << i << " ";
    }
    cout << "}" << endl;
  }
}
//
// Created by 仁和活貴 on 2021/08/13.
//

#include <iostream>
using namespace std;

int main() {
  int N;
  int t[100000], x[100000], y[100000];
  cin >> N;
  t[0] = x[0] = y[0] = 0;  // 初期状態
  // 1-index にしておく
  for (int i = 0; i < N; ++i) cin >> t[i+1] >> x[i+1] >> y[i+1];

  bool can = true;
  for (int i = 0; i < N; ++i) {
    int dt = t[i+1] - t[i];
    int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
    if (dt < dist) can = false;

    // dist と dt の偶奇は一致する必要あり！
    if (dist % 2 != dt % 2) can = false;
  }

  if (can) cout << "Yes" << endl;
  else cout << "No" << endl;
}

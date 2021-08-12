//
// Created by 仁和活貴 on 2021/08/13.
//

#include <iostream>
using namespace std;

int main() {
  int N;
  int d[110];
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> d[i];

  int num[110] = {0};  // バケット
  for (int i = 0; i < N; ++i) {
    num[d[i]]++;  // d[i] が 1 個増える
  }

  int res = 0;  // 答えを格納

  // 1 <= d[i] <= 100 なので 1 から 100 まで探索
  for (int i = 1; i <= 100; ++i) {
    if (num[i]) {  // 0 より大きかったら
      ++res;
    }
  }
  cout << res << endl;
}
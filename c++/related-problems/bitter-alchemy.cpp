//
// Created by 仁和活貴 on 2021/08/14.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  int m[N];
  int min = 0;
  for (int i = 0; i < N; ++i) {
    cin >> m[i];
    min += m[i];
  }
  sort(m, m + N);
  int res;
  res = (X - min) / m[0];
  cout << N + res << endl;
}
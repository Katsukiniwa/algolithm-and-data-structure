//
// Created by 仁和活貴 on 2021/08/12.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N;
  int a[110];
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> a[i];

  sort(a, a + N);
  int Alice = 0;
  int Bob = 0;
  for (int i = 0; i < N; ++i) {
    if (i % 2 == 0) {
      Alice += a[i];
    }
    else {
      Bob += a[i];
    }
  }
  cout << Alice - Bob << endl;
}
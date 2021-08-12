//
// Created by 仁和活貴 on 2021/08/12.
//

#include <iostream>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  // Cが10の位の商、Dが1の位の商
  int C, D;
  int res = 0;
  for (int n=0; n<=N; ++n) {
    C = n / 10;
    D = n - 10*C;
    if(C + D <= B && C + D >= A) res += n;
  }
  cout << res << endl;
}
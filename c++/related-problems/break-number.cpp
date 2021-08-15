//
// Created by 仁和活貴 on 2021/08/14.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int N;
  cin >> N;
  int res = 0;
  for (int i = 0; i < 100; ++i) {
    if (N < std::pow(2.0, i)) {
      res = std::pow(2.0, i - 1);
      break;
    };
  }
  cout << res << endl;
}
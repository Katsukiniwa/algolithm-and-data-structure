//
// Created by 仁和活貴 on 2021/08/13.
//

#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int show, amari, res;
  show = N / 2;
  amari = N % 2;
  if (amari != 0) {
    res = show + 1;
  } else {
    res = show;
  }

  cout << res << endl;
}
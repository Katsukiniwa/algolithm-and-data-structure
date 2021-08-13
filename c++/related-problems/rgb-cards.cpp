//
// Created by 仁和活貴 on 2021/08/13.
//

#include <iostream>
using namespace std;

int main() {
  int r, g, b;
  cin >> r >> g >> b;
  int val;
  string res = "NO";
  val = r * 100 + g * 10 + b;
  if (val % 4 == 0) res = "YES";
  cout << res << endl;
}
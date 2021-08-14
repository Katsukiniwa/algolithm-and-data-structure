//
// Created by 仁和活貴 on 2021/08/14.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  int res = 700;
  if (S[0] == 'o') res += 100;
  if (S[1] == 'o') res += 100;
  if (S[2] == 'o') res += 100;
  cout << res << endl;
}
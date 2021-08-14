//
// Created by 仁和活貴 on 2021/08/14.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  string first, last, a, b;
  int result;
  result = S.size()-2;
  b = std::to_string(result);
  first = S[0];
  last = S[S.size()-1];
  a = first + b + last;
  cout << a << endl;
}
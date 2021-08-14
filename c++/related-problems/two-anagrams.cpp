//
// Created by 仁和活貴 on 2021/08/14.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  sort(S.begin(), S.end());
  sort(T.begin(), T.end(), greater<>());
  if (S < T) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

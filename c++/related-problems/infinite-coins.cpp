//
// Created by 仁和活貴 on 2021/08/13.
//

#include <iostream>
using namespace std;

int main() {
  int n, a;
  cin >> n >> a;

  int r = n % 500;
  if (r <= a) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

//int main() {
//  int A, N;
//  cin >> N >> A;
//  string res="NO";
//  if (N % 500 <= A) res = "YES";
//  cout << res << endl;
//}
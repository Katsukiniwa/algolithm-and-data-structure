//
// Created by 仁和活貴 on 2021/08/14.
//

#include <iostream>

using namespace std;

//int main() {
//  int N;
//  cin >> N;
//  for (int i = 0; i <= 100 / 4; i++){
//    for (int j = 0; j <= 100 / 7; j++){
//      if (i * 4 + j * 7 == N) {
//        cout << "Yes" << endl;
//        return 0;
//      }
//    }
//  }
//  cout << "No" << endl;
//}

int main() {
  int N;
  cin >> N;
  string res = "NO";
  for (int i = 0; i < 25; ++i) {
    for (int j = 0; j < 15; ++j) {
      if (4 * i + 7 * j == N) {
        cout << i << endl;
        res = "YES";
        break;
      }
    }
  }
  cout << res;
}

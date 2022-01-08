#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

int main() {
  vector<vector<int>> c(3, vector<int>(3));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> c.at(i).at(j);
    }
  }
  vector<int> A(3), B(3);
  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j <= 100; j++) {
      for (int k = 0; k <= 100; k++) {
        B.at(0) = c.at(0).at(0) - i;
        B.at(1) = c.at(0).at(1) - i;
        B.at(2) = c.at(0).at(2) - i;
        A.at(0) = i;
        A.at(1) = j;
        A.at(2) = k;
        bool ans = true;
        for (int x = 0; x < 3; x++) {
          for (int y = 0; y < 3; y++) {
            if (A.at(x) + B.at(y) != c.at(x).at(y)) {
              ans = false;
            }
          }
        }
        if (ans) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
}
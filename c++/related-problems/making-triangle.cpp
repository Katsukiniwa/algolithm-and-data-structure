//
// Created by 仁和活貴 on 2021/08/14.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> l(n);
  for (int i = 0; i < n; i++) {
    cin >> l.at(i);
  }
  int cnt = 0;
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        if (l.at(i) < l.at(j) + l.at( k) && l.at(j) < l.at(k) + l.at(i) && l.at(k) < l.at(i) + l.at(j) &&
            l.at(i) != l.at(j) && l.at(j) != l.at(k) && l.at(k) != l.at(i)) {
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;
}


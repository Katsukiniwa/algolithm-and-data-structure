#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> t(n), x(n), y(n);
  for (int i = 0; i < n; i++) cin >> t.at(i) >> x.at(i) >> y.at(i);

  for (int i = 0; i < n; i++) {
    if (i == 0) {
      if (x.at(i) + y.at(i) > t.at(i) || (x.at(i) + y.at(i)) % 2 != t.at(i) % 2) {
        cout << "No" << endl;
        return 0;
      }
    } else {
      if (abs(x.at(i) - x.at(i - 1)) + abs(y.at(i) - y.at(i - 1)) > t.at(i) - t.at(i - 1) ||
          (abs(x.at(i) - x.at(i - 1)) + abs(y.at(i) - y.at(i - 1))) % 2 != (t.at(i) - t.at(i - 1)) % 2) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
}

//int main() {
//  int n;
//  cin >> n;
//  vector<int> t(n), x(n), y(n);
//
//  for (int i = 0; i < n; ++i) cin >> t.at(i) >> x.at(i) >> y.at(i);
//
//  bool res;
//  for (int j = 0; j < n; ++j) {
//    if (j == 0) {
//      int dx = abs(x.at(j) - 0);
//      int dy = abs(y.at(j) - 0);
//      int d = dx + dy;
//      if (d > t.at(0) || t.at(0) % 2 != abs(x.at(0) + y.at(0)) % 2) res = false;
//    } else {
//      int dt = abs(t.at(j) - t.at(j - 1));
//      int dx = abs(x.at(j) - x.at(j - 1));
//      int dy = abs(y.at(j) - y.at(j - 1));
//      if (dx + dy > dt || dt % 2 != (dx + dy) % 2) res = false;
//    }
//  }
//
//  if (res) {
//    cout << "Yes" << endl;
//  } else {
//    cout << "No" << endl;
//  }
//}
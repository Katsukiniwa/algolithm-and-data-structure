#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

int main() {
  int n, min_sum = 0, max_sum = 0, extra = 0;
  cin >> n;
  vector<int> a(n);
  map<string, bool> group;
  group.insert({"gray", false});
  group.insert({"brown", false});
  group.insert({"green", false});
  group.insert({"skyblue", false});
  group.insert({"blue", false});
  group.insert({"yellow", false});
  group.insert({"orange", false});
  group.insert({"red", false});
  for (int i = 0; i < n; ++i) {
    cin >> a.at(i);
  }

  for (int j = 0; j < n; ++j) {
    if (a.at(j) < 400) {
      group.at("gray") = true;
    } else if (a.at(j) >= 400 && a.at(j) < 800) {
      group.at("brown") = true;
    } else if (a.at(j) >= 800 && a.at(j) < 1200) {
      group.at("green") = true;
    } else if (a.at(j) >= 1200 && a.at(j) < 1600) {
      group.at("skyblue") = true;
    } else if (a.at(j) >= 1600 && a.at(j) < 2000) {
      group.at("blue") = true;
    } else if (a.at(j) >= 2000 && a.at(j) < 2400) {
      group.at("yellow") = true;
    } else if (a.at(j) >= 2400 && a.at(j) < 2800) {
      group.at("orange") = true;
    } else if (a.at(j) >= 2800 && a.at(j) < 3200) {
      group.at("red") = true;
    } else if (a.at(j) >= 3200) {
      ++extra;
    }
  }

  for (const auto&[key, value]: group) {
    if (value) ++min_sum;
  }

  printf("%d %d\n", (min_sum ? min_sum : 1), min_sum + extra);

//  /**
//   * 全員3200超え
//   */
//  if (min_sum == 0) {
//    /**
//     * 9人以上存在した場合
//     */
//    if (extra > 8) {
//      cout << 1 << " " << 8 << endl;
//      /**
//       * 8人以下存在した場合
//       */
//    } else {
//      cout << 1 << " " << extra << endl;
//    }
//  } else {
//    if (min_sum + extra > 8) {
//      cout << min_sum << " " << 8 << endl;
//    } else {
//      cout << min_sum << " " << min_sum + extra << endl;
//    }
//  }
}
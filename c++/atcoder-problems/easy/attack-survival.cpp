#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> a(q);
  vector<int> vn(n);
  for (int & i : a) {
    cin >> i;
  }

  /**
   * 開始時点での全員の得点をk-qとする
   */
  for (int & i : vn) {
    i = k - q;
  }
  /**
   * 正解者の得点を1増やす
   */
  for (int i : a) {
    vn.at(i - 1)++;
  }

  for (int i : vn) {
    if (i <= 0) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }
}
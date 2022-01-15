#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n = 4;
  if (n <= 2) return n;
  /**
   * 2は2通り、1は1通りなのでそれぞれをprev, prev2に代入する
   */
  int prev = 2, prev2 = 1, res = 0;
  for (int i = 3; i < n; ++i) {
    res = prev + prev2;
    prev2 = prev;
    prev = res;
  }
  cout << res << endl;
}
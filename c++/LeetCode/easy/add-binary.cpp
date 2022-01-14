#include <iostream>
#include <vector>

using namespace std;

int main() {
  string a = "110", b = "100", res;
  int i = a.length() - 1;
  int j = b.length() - 1;
  int carry = 0;
  while (i >= 0 || j >= 0) {
    int sum = carry;
    if (i >= 0) {
      /**
       * tmp - '0' を実行することでchar tmpをintに変換できる
       */
      sum += a.at(i) - '0';
      i--;
    }
    if (j >= 0) {
      sum += b.at(j) - '0';
      j--;
    }
    /**
     * この時点でsumは0, 1, 2しかとりえないのでcarryは2の時しか1にならない
     */
    carry = sum > 1 ? 1 : 0;
    res += to_string(sum % 2);
  }
  if (carry) {
    res += to_string(carry);
  }
  reverse(res.begin(), res.end());
  cout << res << endl;
}
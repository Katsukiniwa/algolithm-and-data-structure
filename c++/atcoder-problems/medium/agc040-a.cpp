#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  vector<int> a(n + 1);

  /**
   * <   >   >   >   <   <   >   <   <   <   <   <   >   >   >   <
   * 1       3         2     1           5               3       1
   * 0 < 3 > 2 > 1 > 0 < 1 < 2 > 0 < 1 < 2 < 3 < 4 < 5 > 2 > 1 > 0 < 1
   * 28
   */

  /**
   * < については左から考える
   */
  for (int i = 0; i < n; i++) {
    if (s.at(i) == '<') a.at(i + 1) = max(a.at(i + 1), a.at(i) + 1);
//    if (s.at(i) == '<') a[i + 1] = a[i] + 1;
  }
  /**
   * この時点でaは
   * 01000120123450001
   * になる
   */
  for (int j : a) cout << j;
  cout << endl;

  /**
   * > については右から2番目から考える
   */
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] == '>') a[i] = max(a[i], a[i + 1] + 1);
  }
  /**
   * この時点でaは
   * 03210120123452101
   * になる
   */

  ll ans = 0;
  for (int i : a) ans += i;
  cout << ans << endl;
}
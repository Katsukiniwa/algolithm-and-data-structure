#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int c = 1; c <= n; c += 2) {
    int res = 0;
    for (int x = 1; x <= c; ++x) {
      if (c % x == 0) ++res;
    }
    if (res == 8) ans += 1;
  }
  cout << ans;
}

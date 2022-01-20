#include <iostream>

using namespace std;

int main() {
  int t, d, x, cnt = 0;
  cin >> t >> d >> x;
  while (t--) {
    int n, a = 1, sum = 0;
    cin >> n;
    while (sum <= d) {
      sum = (a * n) + 1;
      a++;
      cnt++;
    }
  }
  cout << cnt + x << endl;
}
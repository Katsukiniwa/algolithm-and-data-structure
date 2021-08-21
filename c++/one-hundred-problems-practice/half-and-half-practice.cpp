#include <iostream>
using namespace std;

int main() {
  int a, b, c, x, y;
  int res;
  int large, tmp;
  cin >> a >> b >> c >> x >> y;
  if ((2 * c) < a + b) {
    if (x < y) {
      res = (y - x) * b + x * 2 * c;
    } else {
      res = (x - y) * a + y * 2 * c;
    }
    large = max(x, y);
    tmp = 2 * c * large;
    if (tmp < res) {
      res = tmp;
    }
  } else {
    res = x * a + y * b;
  }
  cout << res;
}
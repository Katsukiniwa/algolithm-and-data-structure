#include <iostream>
using namespace std;

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  int res;
  if (2 * c < a + b) {
    if (x < y) {
      res = 2 * c * x + (y - x) * b;
    } else {
      res = 2 * c * y + (x - y) * a;
    }
    if (max(x, y) * 2 * c < res) {
      res = max(x, y) * 2 * c;
    }
  } else {
    res = x * a + y * b;
  }
  cout << res;
}
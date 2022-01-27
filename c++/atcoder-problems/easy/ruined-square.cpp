#include <iostream>

using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int dx = c - a, dy = d - b;
  cout << c - dy << " " << d + dx << " " << a - dy << " " << b + dx << endl;

  return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

// TODO: やり直す
int main()
{
  long long a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  long long n = min(x, y);
  long long i, j, k;

  i = c * max(x, y) * 2;
  j = c * 2 * n + a * (x - n) + b * (y - n);
  k = a * x + b * y;
  cout << min(min(i, j), k);
}

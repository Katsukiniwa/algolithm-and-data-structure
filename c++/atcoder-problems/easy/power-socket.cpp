#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

int main() {
  int a, b, sum, count;
  cin >> a >> b;
  sum = a;
  count = 1;
  if (b == 1) {
    cout << 0 << endl;
    return 0;
  }

  while(true) {
    if (sum >= b) break;
    sum += a - 1;
    count++;
  }
  cout << count << endl;
}
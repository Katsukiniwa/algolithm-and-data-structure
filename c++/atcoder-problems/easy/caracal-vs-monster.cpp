#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
using ll = long long;

int main() {
  ll h;
  cin >> h;
  vector<ll> a;
  ll count = 0;
  while (h != 0) {
    h /= 2;
    count++;
  }
  ll ans = pow(2, count) - 1;
  cout << ans << endl;
}
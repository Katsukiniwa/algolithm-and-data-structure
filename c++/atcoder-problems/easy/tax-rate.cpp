#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  double res;
  res = n / 1.08;
  int up = res + 0.999999;
  int down = res;
  int up_res = up * 1.08;
  int down_res = down * 1.08;
  if (up_res == n) {
    cout << up << endl;
  } else if (down_res == n) {
    cout << down <<endl;
  } else {
    cout << ":(";
  }
}
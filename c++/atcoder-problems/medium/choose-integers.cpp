#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

int main() {
  int a = 0, b= 0, c=0;
  bool res = false;
  cin >> a >> b >> c;

  for (int i = 1; i < b; ++i) {
    if ((i * a) % b == c) res = true;
  }

  if (res) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
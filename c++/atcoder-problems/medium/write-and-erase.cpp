#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <stack>
#include <set>

using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
//  stack<ll> b;
  set<ll> c;
  for (int i = 0; i < n; ++i) {
    cin >> a.at(i);
  }

  for (int j = 0; j < n; ++j) {
    if (c.find(a.at(j)) == c.end()) {
      c.insert(a.at(j));
    } else {
      c.erase(a.at(j));
    }
  }

  cout << c.size() << endl;
}
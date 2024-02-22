#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, t, a;
  cin >> n >> t >> a;
  
  vector<double> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    v[i] = abs((t - v[i] * 0.006) - a);
  }
  
  double mn = *min_element(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    if (v[i] == mn) {
      cout << i + 1 << '\n';
      return 0;
    }
  }
  return 0;
}

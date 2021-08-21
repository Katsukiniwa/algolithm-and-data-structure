#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> X(n), Y(n);
  set<int> se;
  for (int i = 0; i < n; i++) {
    cin >> X[i] >> Y[i];
    se.insert(X[i] * 10000 + Y[i]);
  }
  int ans = 0;
  int xi, yi, xj, yj, xk, yk, xl, yl, dx, dy;
  for (int i = 0; i < n; i++) {
    xi = X[i];
    yi = Y[i];
    for (int j = 0; j < n; j++) {
      if (i == j) continue;
      xj = X[j];
      yj = Y[j];
      dx = xj - xi;
      dy = yj - yi;
      xk = xj - dy;
      yk = yj + dx;
      xl = xk - dx;
      yl = yk - dy;
      if (se.count(xk * 10000 + yk) && se.count(xl * 10000 + yl)) ans = max(ans, dx * dx + dy * dy);
    }
  }
  cout << ans << "\n";
}
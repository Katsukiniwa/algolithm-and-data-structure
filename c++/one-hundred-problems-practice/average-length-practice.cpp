#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;
typedef long long ll;

vector<int> x(10);
vector<int> y(10);

double dist(int i, int j) {
  int dx = x.at(i) - x.at(j);
  int dy = y.at(i) - y.at(j);
  return pow(dx * dx + dy * dy, 0.5);
}

int main() {
  int n;
  cin >> n;
  // x = {1: ?, 2: ?, ..., n: ?}
  // y = {1: ?, 2: ?, ..., n: ?}
  for (int i = 1; i <= n; i++) cin >> x.at(i) >> y.at(i);
  double sum = 0.0;
  vector<int> v(n);
  for (int i = 0; i < n; i++) v.at(i) = i + 1;
  // v = {0: 1, 1: 2, ... , n-1: n}
  do {
    for (int i = 0; i < n - 1; i++) {
      sum += dist(v.at(i), v.at(i + 1));
    }
  } while (next_permutation(v.begin(), v.end()));
  int Factorial = 1;
  for (int i = 2; i <= n; i++) Factorial *= i;
  cout << fixed << setprecision(10) << sum / Factorial << endl;
}

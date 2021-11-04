#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<double> x(n), y(n), res(5);

  for (int i = 0; i < n; ++i) {
    cin >> x.at(i);
    cin >> y.at(i);
  }

  for (int j = 0; j < n - 1; ++j) {
    for (int i = 1; i < n; ++i) {
      double result = pow(pow((x.at(j) - x.at(i)), 2) + pow(y.at(j) - y.at(i), 2), 0.5);
      res.push_back(result);
    }
  }

  double max = *max_element(res.begin(), res.end());

  cout << max << endl;
}
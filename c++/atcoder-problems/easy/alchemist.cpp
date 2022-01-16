#include <iostream>
#include <vector>

using namespace std;

int main() {
  double N;
  cin >> N;
  vector<double> v(N);
  for (int i = 0; i < N; ++i) {
    cin >> v.at(i);
  }
  sort(v.begin(), v.end());
  double res = 0, tmp = 0;
  for (int j = 1; j < N; ++j) {
    if (j == 1) {
      tmp = (v.at(j) + v.at(j - 1)) / 2;
      res = tmp;
    } else {
      res = (tmp + v.at(j)) / 2;
      tmp = res;
    }
  }
  cout << res << endl;
}
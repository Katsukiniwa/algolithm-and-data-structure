#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  for (int i = 0; i < N; ++i) {
    cin >> d.at(i);
  }
  sort(d.begin(), d.end());
  int tmp = N / 2;
  int a = d.at(tmp - 1);
  int b = d.at(tmp);
  int res = 0;
  if (a == b) {
    cout << res << endl;
  } else {
    cout << b - a << endl;
  }
}
#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

int main() {
  int N, x;
  cin >> N >> x;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) {
    cin >> a.at(i);
  }

  sort(a.begin(), a.end());
  ll i = 0;
  while (true) {
    x -= a.at(i);
    i++;
            if (x == 0) {
      cout << i << endl;
      return 0;
    }
    if (x < 0) {
      i--;
      cout << i << endl;
      return 0;
    }
    if (i >= N) {
      i--;
      cout << i << endl;
      return 0;
    }
  }
}
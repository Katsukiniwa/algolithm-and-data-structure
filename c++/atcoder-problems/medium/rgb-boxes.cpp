#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
  int R, G, B, N;
  cin >> R >> G >> B >> N;

  int res = 0;
  for (int i = 0; i <= N; ++i) {
    for (int j = 0; j <= N; ++j) {
      double k = (N - i * R - j * G) / B;
      if (k >= 0 && floor(k) == ceil(k) && (i * R + j * G + k * B) == N) {
        ++res;
      }
    }
  }
  cout << res << endl;
}
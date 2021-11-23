#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int result(char arg) {
  if (arg == '.') {
    return 0;
  } else if (arg == '#') {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int h, w;
  char j[55][55];
  cin >> h >> w;
  for (int l = 0; l < h; ++l) {
    for (int i = 0; i < w; ++i) {
      cin >> j[l][i];
    }
  }

  for (int i = 0; i < h; ++i) {
    for (int k = 0; k < w; ++k) {
      if (j[i][k] == '.') {
        char count = '0' +
            result(j[i - 1][k - 1]) + result(j[i - 1][k]) + result(j[i - 1][k + 1]) +
            result(j[i][k - 1]) + result(j[i][k + 1]) +
            result(j[i + 1][k - 1]) + result(j[i + 1][k]) + result(j[i + 1][k + 1]);
        j[i][k] = count;
      }
    }
  }

  for (int l = 0; l < h; ++l) {
    for (int i = 0; i < w; ++i) cout << j[l][i];
    cout << endl;
  }
}
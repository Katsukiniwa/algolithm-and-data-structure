#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> s(N);
  int res = 0;
  for (int i = 0; i < N; i++) {
    cin >> s[i];
    res += s[i];
  }

  sort(s.begin(), s.end());

  if (res % 10 == 0) {
    for (int i = 0; i < N; i++) {
      if (s[i] % 10 != 0) {
        res -= s[i];
        break;
      }
    }
    if (res % 10 == 0) res = 0;
  }

  cout << res << endl;
}
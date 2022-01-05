#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  map<int, int> cnt;
  for (int i = 0; i < N; i++) {
    cnt[A[i] + 1]++;
    cnt[A[i]]++;
    cnt[A[i] - 1]++;
  }

  int ans = 0;
  for (const auto&[a, n]: cnt) ans = max(ans, n);
  cout << ans << endl;
}
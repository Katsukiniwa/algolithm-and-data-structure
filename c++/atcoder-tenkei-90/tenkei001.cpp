#include <iostream>

using namespace std;
using ll = long long;

long long N, K, L;
long long A[1 << 18];

bool solve(long long M) {
  long long cnt = 0, pre = 0;
  for (int i = 1; i <= N; i++) {
    /**
     * 前切った場所から今回切る場所までの長さがM以上かつ残りの長さがM以上かを判定
     * cntはM以上の長さのピースの個数
     */
    if (A[i] - pre >= M && L - A[i] >= M) {
      cnt += 1;
      pre = A[i];
    }
  }
  return cnt >= K;
}

int main() {
  cin >> N >> L;
  for (int i = 0; i < N; ++i) cin >> A[i];

  ll left = -1;
  ll right = L + 1;
  while (right - left > 1) {
    ll mid = left + (right - left) / 2;
    if (!solve(mid)) right = mid;
    else left = mid;
  }
  cout << left << endl;
  return 0;
}
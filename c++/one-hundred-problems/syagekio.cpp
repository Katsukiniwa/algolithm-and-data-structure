#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

constexpr ll INF = 1LL << 60;
ll N;
vector<ll> H, S;

bool check(ll x) {
  vector<ll> T;
  for (int i = 0; i < N; i++) {
    if (x < H[i]) return false;
    T.push_back((x - H[i]) / S[i]);
  }
  sort(T.begin(), T.end());
  for (int i = 0; i < N; i++) {
    if (T[i] < i) return false;
  }
  return true;
}

ll search() {
  ll l = -1, r = INF;
  while (r - l > 1) {
    ll mid = (l + r) / 2;
    if (check(mid)) r = mid;
    else l = mid;
  }
  return r;
}

int main() {
  cin >> N;
  H.resize(N);
  S.resize(N);
  for (int i = 0; i < N; i++) cin >> H[i] >> S[i];
  ll ans = search();
  cout << ans << endl;
  return 0;
}
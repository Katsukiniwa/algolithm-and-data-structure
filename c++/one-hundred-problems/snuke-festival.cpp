#include <iostream>
#include <vector>

using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
typedef long long ll;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N), C(N);
  rep(i, 0, N) cin >> A[i];
  rep(i, 0, N) cin >> B[i];
  rep(i, 0, N) cin >> C[i];
  sort(A.begin(), A.begin() + N);
  sort(C.begin(), C.begin() + N);

  ll ans = 0;
  rep(b, 0, N) {
    ll a = lower_bound(A.begin(), A.begin() + N, B[b]) - A.begin();
    ll c = N - (upper_bound(C.begin(), C.begin() + N, B[b]) - C.begin());
    ans += a * c;
  }
  cout << ans << endl;
}

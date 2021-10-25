#include <iostream>
#include <vector>

using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
typedef long long ll;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N), B(N), C(N);
  rep(i, 0, N) cin >> A[i];
  rep(i, 0, N) cin >> B[i];
  rep(i, 0, N) cin >> C[i];
  sort(A.begin(), A.begin() + N);
  sort(C.begin(), C.begin() + N);

  ll ans = 0;
  rep(b, 0, N) {
    /*
     * iteratorをintに変換するためにvector.size()を引く
     * bより小さいaの要素数
     */
    ll a = lower_bound(A.begin(), A.end(), B[b]) - A.begin();
    /*
     * bより大きいcの要素数
     */
    ll c = N - (upper_bound(C.begin(), C.end(), B[b]) - C.begin());
    ans += a * c;
  }
  cout << ans << endl;
}

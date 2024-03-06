#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;
const ll infl = 1LL << 60;
template <class T>
bool chmin(T &a, const T &b)
{
  if (b < a)
  {
    a = b;
    return 1;
  }
  return 0;
}

using namespace std;

// TODO: やり直す
int main()
{
  ll A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;

  ll ans = infl;
  rep(ab, 0, 201010)
  {
    ll sm = C * ab;

    ll x = X - ab / 2;
    ll y = Y - ab / 2;

    if (0 < x)
      sm += x * A;
    if (0 < y)
      sm += y * B;

    chmin(ans, sm);
  }

  cout << ans << endl;
}

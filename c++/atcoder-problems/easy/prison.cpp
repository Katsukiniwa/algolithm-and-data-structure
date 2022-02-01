#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

#define rep(counter, initial_value, max) for (int counter = initial_value; counter < max; counter++)
#define ce(s) cout<< s << endl;

/**
 * 理解できなかった
 */
int main() {
  int N, M;
  cin >> N >> M;

  vector<int> L(M), R(M);
  for (int i = 0; i < M; i++) cin >> L.at(i) >> R.at(i);

  sort(L.begin(), L.end());
  sort(R.begin(), R.end());

  int L_max, R_min, ans;
  L_max = L.at((int) L.size() - 1);
  R_min = R.at(0);

  ans = R_min - L_max + 1;

  if (ans > 0) cout << ans << endl;
  else cout << 0 << endl;
}
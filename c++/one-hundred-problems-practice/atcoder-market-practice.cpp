#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

ll n, ans = (1LL << 60);
vector<ll> aArray(100);
vector<ll> bArray(100);
vector<ll> eArray(200);

ll solve(long long p1, long long p2) {
  long long V1 = 0;
  for (int i = 1; i <= n; i++) {
    V1 += abs(p1 - aArray[i]);
    V1 += abs(aArray[i] - bArray[i]);
    V1 += abs(bArray[i] - p2);
  }
  return V1;
}

int main() {
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> aArray.at(i);
    cin >> bArray.at(i);
  }

  for (int i = 1; i <= n; i++) eArray.push_back(aArray[i]);
  for (int i = 1; i <= n; i++) eArray.push_back(bArray[i]);

  for (ll v1 : eArray) {
    for (ll v2 : eArray) {
      ans = min(ans, solve(v1, v2));
    }
  }

  cout << ans << endl;
}
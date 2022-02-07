#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int N, ans = 0;
  cin >> N;
  vector<int> P(N);
  for (int i = 0; i < N; ++i) {
    cin >> P.at(i);
  }

  int t_min = N + 1;
  rep(i, N) {
    int a;
    cin >> a;
    if (t_min >= a) {
      ans++;
      t_min = a;
    }
  }
  cout << ans << endl;
}
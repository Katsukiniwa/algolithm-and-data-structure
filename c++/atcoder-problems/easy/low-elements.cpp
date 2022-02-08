#include <iostream>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, ans = 0;
  cin >> n;
  int t_min = n + 1;
  rep(i, n) {
    int a;
    cin >> a;
    if (t_min >= a) {
      ans++;
      t_min = a;
    }
  }
  cout << ans << endl;
}
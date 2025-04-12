#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> m(N);
  for(int i = 0; i < N; i++) cin >> m[i];

  int saitei = 0;
  for(int i = 0; i < N; i++) {
    saitei += m[i];
  }
  int nokori = X - saitei;
  sort(m.begin(), m.end());
  cout << N + nokori / m[0] << endl;
}

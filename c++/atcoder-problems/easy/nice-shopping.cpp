#include <iostream>
#include <vector>

using namespace std;

int main() {
  int A, B, M;
  cin >> A >> B >> M;
  vector<int> a(A), b(B), x(M), y(M), z(M);
  for (int i = 0; i < A; ++i) {
    cin >> a.at(i);
  }
  for (int j = 0; j < B; ++j) {
    cin >> b.at(j);
  }
  for (int k = 0; k < M; ++k) {
    cin >> x.at(k) >> y.at(k) >> z.at(k);
  }
  int res = 100000000;
  for (int l = 0; l < M; ++l) {
    int tmp = a.at(x.at(l) - 1) + b.at(y.at(l) - 1) - z.at(l);
    res = min(tmp, res);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  res = min(res, a.at(0) + b.at(0));
  cout << res << endl;
}
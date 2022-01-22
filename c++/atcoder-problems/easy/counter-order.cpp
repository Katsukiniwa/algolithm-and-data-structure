#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> &u, vector<int> &v) {
  bool res = true;
  for (int i = 0; i < u.size(); i++) {
    if (u[i] != v[i]) res = false;
  }
  return res;
}

int main() {
  int n;
  cin >> n;
  vector<int> p(n), q(n), v(n);
  for (int i = 0; i < n; i++) { cin >> p[i]; }
  for (int i = 0; i < n; i++) { cin >> q[i]; }
  for (int i = 0; i < n; i++) { v[i] = i + 1; }

  int count = 1, a, b;
  do {
    if (issame(v, p)) { a = count; }
    if (issame(v, q)) { b = count; }
    count++;
  } while (next_permutation(v.begin(), v.end()));
  cout << abs(a - b) << endl;
}
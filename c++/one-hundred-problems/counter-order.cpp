#include<iostream>
#include<algorithm>

using namespace std;

int main() {
  int n, i, p_cnt = 1, q_cnt = 1;
  cin >> n;
  char ch;
  string p, q, o;
  for (i = 0; i < n; i++) {
    cin >> ch;
    p += ch;
  }
  for (i = 0; i < n; i++) {
    cin >> ch;
    q += ch;
  }

  o = p, i = 0, sort(o.begin(), o.end());
  do {
    cout << o << endl;
    if (o == p) p_cnt = i;
    if (o == q) q_cnt = i;
    ++i;
  } while (next_permutation(o.begin(), o.end()));

  cout << abs(p_cnt - q_cnt) << endl;
  return 0;
}
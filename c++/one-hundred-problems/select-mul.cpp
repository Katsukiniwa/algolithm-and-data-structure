#include <iostream>
#include <vector>

using ll = long long;

using namespace std;

int main() {
  string n;
  cin >> n;
  vector<ll> m;

  for (int bit = 0; bit < (1 << n.size()); ++bit) {
    string s, k;
    for (int i = 0; i < n.size(); ++i) {
      if (bit & (1 << i)) {
        s.push_back(n.at(i));
      } else {
        k.push_back(n.at(i));
      }
    }
//    cout << "s: " << s << " k: " << k << endl;
    sort(s.begin(), s.end(), greater<>());
    sort(k.begin(), k.end(), greater<>());
    if (!s.empty() && !k.empty()) m.push_back(stoll(s) * stoll(k));
    s = "";
    k = "";
  }

  int max = *max_element(m.begin(), m.end());

  cout << max << endl;
}
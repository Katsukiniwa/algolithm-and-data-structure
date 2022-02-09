#include <iostream>
#include <map>

using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main() {
  string s;
  cin >> s;
  map<char, int> M;
  rep(i, s.size())M[s.at(i)]++;

  bool ok = true;
  for (auto&[k, v] : M) if (v % 2 != 0) ok = false;

  if (ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
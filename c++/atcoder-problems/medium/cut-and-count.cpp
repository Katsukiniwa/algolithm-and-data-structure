#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

int main() {
  int N, m = 0;
  string S;
  cin >> N >> S;
  for (int i = 1; i < S.size() - 1; i++) {
    string X = S.substr(0, i), Y = S.substr(i);
    int c = 0;
    for (char z = 'a'; z <= 'z'; z++) {
      if (count(X.begin(), X.end(), z) * count(Y.begin(), Y.end(), z) != 0) {
        c++;
      }
    }
    m = max(c, m);
  }
  cout << m << endl;
}
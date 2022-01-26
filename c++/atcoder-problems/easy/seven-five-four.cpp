#include <iostream>

using namespace std;

int main() {
  string S;
  cin >> S;

  int res = 100000;
  for (int i = 0; i < S.size() - 2; ++i) {
    string T = S.substr(i, 3);
    int I = stoi(T);
    res = min(res, abs(753 - I));
  }

  cout << res << endl;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  vector<int> res_array(N + 1);

  res_array.at(0) = 0;
  int res = 0;
  for (int i = 0; i < N; ++i) {
    if (S.at(i) == 'I') {
      res_array.at(i) = ++res;
    } else {
      res_array.at(i) = --res;
    }
  }

  sort(res_array.begin(), res_array.end());
  cout << res_array.at(N) << endl;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A.at(i);
  }

  int res = 0;
  while (true) {
    bool tmp = true;
    for (int i = 0; i < N; ++i) {
      if (A.at(i) % 2 == 0) {
        A.at(i) = A.at(i) / 2;
      } else {
        tmp = false;
      }
    }
    if (tmp) {
      ++res;
    } else {
      break;
    }
  }

  cout << res << endl;
}
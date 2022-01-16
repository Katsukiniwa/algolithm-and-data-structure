#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> A(M);
  for (int i = 0; i < M; ++i) {
    cin >> A.at(i);
  }

  int left = 0, right = 0;
  for (int i = 0; i < M; ++i) {
    if (A.at(i) < X) {
      ++left;
    }
    else {
      ++right;
    }
  }
  cout << min(left, right) << endl;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  int max = -1;
  for (int j = 0; j < N; ++j) {
    cin >> A.at(j);
  }

  /**
   * 各家の間隔の最大値を求める
   */
  for (int i = 1; i < N; i++) {
    int d = A.at(i) - A.at(i - 1);
    if (max < d) max = d;
  }
  int d = K - A.at(N - 1) + A.at(0);
  if (max < d) max = d;

  cout << K - max << endl;
}
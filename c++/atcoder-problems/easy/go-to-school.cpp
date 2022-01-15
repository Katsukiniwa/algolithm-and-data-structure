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

  /**
   * 2, 3, 1
   *
   * 0, 1, 2 i
   * 1, 2, 3 i+1
   *
   * 3が1番目、1が2番目、2が3番目
   * 3が0番目、1が1番目、2が2番目
   *
   * 元の配列の添字をiとした時求める配列resultは
   * result.at(A.at(i) - 1) = i + 1;
   *
   * 3, 1, 2
   */

  vector<int> rev(N);
  for (int i = 0; i < N; i++) rev.at(A.at(i) - 1) = i + 1;
  for (int j = 0; j < N; ++j) cout << rev.at(j) << " ";
  return 0;
}
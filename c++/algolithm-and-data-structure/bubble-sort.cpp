#include <iostream>
#include <vector>

using namespace std;

/**
 * flagを用いたバブルソート
 * @param A
 * @param N
 * @return sw
 */
int bubbleSort(vector<int> A, int N) {
  /**
   * 転倒数
   */
  int sw = 0;

  for (int i = 0; i < N - 1; i++) {
    for (int j = N - 1; j >= i + 1; j--) {
      if (A[j] < A[j - 1]) {
        /**
         * 隣接要素を交換する
         */
        swap(A[j], A[j - 1]);
        sw++;
      }
    }
  }

  return sw;
}


int main() {
  int N, sw;
  vector<int> A(N);
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> A[i];

  sw = bubbleSort(A, N);

  for (int j = 0; j < N; ++j) {
    if (j) cout << " ";
    cout << A[j];
  }

  cout << endl;
  cout << sw << endl;

  return 0;
}

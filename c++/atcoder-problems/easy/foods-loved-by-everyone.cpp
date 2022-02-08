#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M, K, A, i, C = 0;
  cin >> N >> M;
  vector<int> B(M, 0);
  for (i = 0; i < N; i++) {
    cin >> K;
    for (int j = 0; j < K; j++) {
      cin >> A;
      B[A - 1]++;
    }
  }
  for (i = 1; i <= M; i++) {
    if (B[i - 1] == N) C++;
  }

  cout << C;
}
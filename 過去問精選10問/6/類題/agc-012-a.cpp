#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
  long long N;
  cin >> N;
  vector<long long> A(3 * N);
  for(int i = 0; i < 3 * N; i++) cin >> A[i];

  sort(A.begin(), A.end());
  long long result = 0;
  for(int i = N; i < 3 * N; i++) {
    if (i % 2 == 0) result += A[i];
  }

  cout << result << endl;
}

// TODO: やり直す
// int main() {
//   int N;
//   cin >> N;
//   vector<int> A(3 * N);
//   for(int i = 0; i < 3 * N; i++) cin >> A[i];

//   sort(A.begin(), A.end(), greater<long long>());
//   long long res = 0;
//   for (int i = 1, j = 0; j < N; i += 2, ++j) res += A[i];
//   cout << res << endl;
// }

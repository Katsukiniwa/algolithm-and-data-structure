#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  long long N;
  cin >> N;
  vector<long long> A(3 * N);
  for (int i = 0; i < 3 * N; i++)
    cin >> A[i];

  sort(A.begin(), A.end());
  long long result = 0;
  for (int i = N; i < 3 * N; i += 2)
  {
    result += A[i];
  }

  cout << result << endl;
}

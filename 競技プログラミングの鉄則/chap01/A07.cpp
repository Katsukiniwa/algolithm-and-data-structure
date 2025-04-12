#include <iostream>
using namespace std;

int main()
{
  int INIT = 100009;
  int D, N;
  cin >> D >> N;
  int L[INIT], R[INIT], B[INIT], A[INIT];
  for (int i = 1; i <= N; i++)
    cin >> L[i] >> R[i];
  for (int i = 1; i <= N; i++)
  {
    B[L[i]] += 1;
    B[R[i] + 1] -= 1;
  }
  A[0] = 0;
  for (int i = 1; i <= D; i++)
    A[i] = A[i - 1] + B[i];
  for (int i = 1; i <= D; i++)
    cout << A[i] << endl;
  return 0;
}

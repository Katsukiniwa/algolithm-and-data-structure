#include <iostream>
using namespace std;

int main()
{
  int N, X, A[100];
  cin >> N >> X;
  for (int i = 0; i++, i < N;)
  {
    cin >> A[i];
  }
  for (int i = 0; i++, i < N;)
  {
    if (A[i] == X)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}

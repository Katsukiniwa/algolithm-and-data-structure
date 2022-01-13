#include <iostream>

using namespace std;

int main() {
  long long int N, K;
  cin >> N >> K;

  N %= K;
  cout << min(N, abs(N - K)) << endl;

  return 0;
}
#include <iostream>

using namespace std;

bool is_prime(long long N) {
  if (N == 1) return false;
  for (long long i = 2; i * i <= N; ++i) {
    if (N % i == 0) return false;
  }
  return true;
}

int main() {
  int X;
  cin >> X;
  while (true) {
    if(is_prime(X)) {
      break;
    } else {
      ++X;
    }
  }
  cout << X;
}
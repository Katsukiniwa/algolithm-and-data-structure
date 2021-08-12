#include <iostream>
using namespace std;

int main() {
  int A = -1, B = -1, C = -1, N, Y;
  cin >> N >> Y;
  int total;
  for (int a = 0; a < N; ++a) {
    for (int b = 0; b < N; ++b) {
      total = a * 10000 + b * 5000 + (N - a - b) * 1000;
      if (total == Y) {
        A = a;
        B = b;
        C = N - a - b;
      }
    }
  }

  cout << A << " " << B << " " << C << endl;
}
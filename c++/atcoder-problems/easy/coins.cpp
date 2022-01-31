#include <iostream>

using namespace std;

int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;

  int res = 0;
  for (int i = 0; i <= A; ++i) {
    for (int j = 0; j <= B; ++j) {
      for (int k = 0; k <= C; ++k) {
//        cout << "A: " << A << " " << "B: " << B << " " << "C: " << C << " " << "sum: " << (A * 500) + (B * 100) + (C * 50) << endl;
        if ((i * 500) + (j * 100) + (k * 50) == X) ++ res;
      }
    }
  }

  cout << res << endl;
}
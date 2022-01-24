#include <iostream>

using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  cout << N / (A + B) * A + min(N % (A + B), A) << endl;
}
#include <iostream>

using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int res = 0;
  if (A == B && B == C && A % 2 == 0) {
    res = -1;
    cout << res << endl;
  } else if(A == B && B == C && A % 2 != 0) {
    res = 0;
    cout << res << endl;
  } else {
    while (true) {
      if (A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
        int tmp_a = A / 2;
        int tmp_b = B / 2;
        int tmp_c = C / 2;
        A = tmp_b + tmp_c;
        B = tmp_a + tmp_c;
        C = tmp_a + tmp_b;
        ++res;
      } else {
        break;
      }
    }

    cout << res << endl;
  }
}
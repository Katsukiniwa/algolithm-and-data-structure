#include<iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  cout << A << " " << B << endl;
  string result = "NO";
  for(int i = A; i <= B; i++) {
    if (i % 100 == 0) {
      result = "YES";
    }
  }
  cout << result << endl;
  return 0;
}

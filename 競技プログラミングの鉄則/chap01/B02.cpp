#include<iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  bool result;
  for(int i = A; i<=B; i++) {
    if (100 % i == 0) {
      result = true;
      break;
    } else {
      result = false;
    }
  }
  if (result) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

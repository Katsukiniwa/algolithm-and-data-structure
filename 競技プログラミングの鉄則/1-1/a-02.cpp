#include<iostream>
using namespace std;

int N, X, A[109];
bool result = false;

int main() {
  cin >> N >> X;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  
  for (int i = 0; i < N; i++) {
    if (A[i] == X) {
      result = true;
    }
  }
  
  if (result) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}

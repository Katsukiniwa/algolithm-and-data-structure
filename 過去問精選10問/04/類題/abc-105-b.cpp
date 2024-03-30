#include<iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  if (N % 4 == 0) {
    cout << "Yes" << endl;
    return 0;
  }
  for(int i = 0; i < (N / 7) + 1; i++) {
    int nokori = N - 7 * i;
    if (nokori % 4 == 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}

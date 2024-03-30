#include<iostream>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int sum = 0;
  while(N > 0) {
      sum++;
      N /= K;
  }
  cout << sum << endl;
}

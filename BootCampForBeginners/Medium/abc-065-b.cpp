#include<iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int a[N];
  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  int index = 1, result = 0;
  for(int i = 0; i < N; i++) {
    index = a[index - 1];
    if (index == 2) {
      cout << result + 1 << endl;
      return 0;
    }
    result++;
  }
  
  cout << -1 << endl;
}

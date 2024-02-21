#include<iostream>
using namespace std;

int waru(int i) {
  int result = 0;
  while(true) {
    if (i % 2 == 0) {
      i /= 2;
      result++;
    } else {
      break;
    }
  }
  return result;
}

// TODO: やり直す
int main() {
  int N;
  cin >> N;
  int result1 = 0; // 何回割れたか
  int result2 = 1; // 数字
  for (int i = 1; i <= N; i++) {
    int res = waru(i);
    if (result1 <= res) {
      result1 = res;
      result2 = i;
    }
  }

  cout << result2 << endl;
}

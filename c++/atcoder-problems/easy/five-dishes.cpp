#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> time(5);
  for (int i = 0; i < 5; ++i) {
    cin >> time.at(i);
  }
  int res = 200;
  for (int j = 0; j < 5; ++j) {
    if ((time.at(j) % 10) != 0) {
      res = min(res, time.at(j) % 10);
    }
  }
  if (res == 200) {
    int result = 0;
    for (int i : time) {
      result += i;
    }
    cout << result << endl;
    return 0;
  }
  int amount = 0;
  for (int k = 0; k < 5; ++k) {
    if ((time.at(k) % 10) != 0) {
      amount += (time.at(k) / 10 + 1) * 10;
    } else {
      amount += (time.at(k) / 10) * 10;
    }
  }
  cout << amount - 10 + res << endl;
}
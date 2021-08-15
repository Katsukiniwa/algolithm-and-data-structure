#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  long long tmp = 0, max = 0;
  for (char i : s) {
    if (i == 'A' || i == 'C' || i == 'G' || i == 'T') {
      ++tmp;
    } else {
      if (max < tmp) {
        max = tmp;
      }
      tmp = 0;
    }
  }
  if(max <= tmp) {
    cout << tmp;
  } else {
    cout << max;
  }
}

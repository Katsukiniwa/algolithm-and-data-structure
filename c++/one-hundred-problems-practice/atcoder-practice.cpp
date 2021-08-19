#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans;
  int temp = 0;
  for (char i : s) {
    if(i == 'A' || i == 'C' || i == 'G' || i == 'T' ) {
      ++temp;
    } else {
      if(temp > ans) {
        ans = temp;
        temp = 0;
      }
    }
  }
  if (temp > ans) {
    cout << temp;
  } else {
    cout << ans;
  }
}
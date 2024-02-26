#include<iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ai, zi;
  for(int i = 0; i < s.size(); i++) {
    if (s[i] == 'A') {
      ai = i;
      break;
    }
  }
  for(int i = s.size() - 1; i > 0; i--) {
    if (s[i] == 'Z') {
      zi = i;
      break;
    }
  }
  cout << zi - ai + 1 << endl;
}

#include <iostream>

using namespace std;

int main() {
  string s = "   fly me   to   the moon  ";

  reverse(s.begin(), s.end());

  int res = 0;
  bool find = false;
  for (char i : s) {
    if (i != ' ') find = true;
    if (find && i == ' ') {
      break;
    }
    if (find) {
      ++res;
    }
  }

  cout << res << endl;

  cout << s << endl;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  string haystack, needle;
  cin >> haystack >> needle;

  if (haystack.empty() && needle.empty()) return 0;
  if (haystack.size() < needle.size()) return -1;
  if (haystack.size() == needle.size()) {
    if (haystack == needle) {
      cout << 0 << endl;
      return 0;
    } else {
      cout << -1 << endl;
      return -1;
    }
  }
  for (int i = 0; i <= haystack.size() - needle.size(); ++i) {
    if (haystack.substr(i, needle.size()) == needle) {
      cout << i << endl;
      return 0;
    }
  }
  return -1;
}
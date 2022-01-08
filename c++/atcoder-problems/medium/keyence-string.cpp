#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

int main() {
  string str;
  cin >> str;

  if (str == "keyence") {
    puts("YES");
    return 0;
  }

  int n = str.size();
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      string S;
      for (int k = 0; k < n; k++) {
        if (i <= k && k <= j) {
          continue;
        } else {
          /**
           * 0~i, j~最後までの部分しかSに足さないため
           */
          S.push_back(str[k]);
        }
      }
      if (S == "keyence") {
        puts("YES");
        return 0;
      }
    }
  }
  puts("NO");
}
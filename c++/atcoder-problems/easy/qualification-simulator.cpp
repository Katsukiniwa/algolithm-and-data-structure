#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;
using ll = long long;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  int sum = 0, b_sum = 0;
  cin >> s;
  for (int i = 0; i < n; i++) {
    if (s.at(i) == 'a') {
      if (sum < a + b) {
        cout << "Yes" << endl;
        ++sum;
      } else {
        cout << "No" << endl;
      }
    } else if (s.at(i) == 'b') {
      if (sum < a + b && b_sum + 1 <= b) {
        cout << "Yes" << endl;
        ++sum;
        ++b_sum;
      } else {
        cout << "No" << endl;
      }
    } else {
      cout << "No" << endl;
    }
  }
}
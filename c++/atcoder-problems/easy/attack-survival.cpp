#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> v(q);
  vector<int> vn(n);
  for (int & i : v) {
    cin >> i;
  }

  for (int & i : vn) {
    i = k - q;
  }
  for (int i : v) {
    vn[i - 1]++;
  }

  for (int i : vn) {
    if (i <= 0) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }
}
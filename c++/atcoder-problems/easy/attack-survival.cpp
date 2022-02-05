#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> A(Q), point(N, K - Q);
  for (int i = 0; i < Q; ++i) {
    int tmp;
    cin >> tmp;
    ++point.at(tmp - 1);
  }
  for (int i : point) {
    if (i > 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int target = 0;
  vector<int> A(100000);

  for (int i = 0; i < A.size() - 1; i++) {
    for (int j = 0; j < A.size(); j++) {
      if (A[i] + A[j] == target) {
        cout << "[i, j]" << endl;
      }
    }
  }
}

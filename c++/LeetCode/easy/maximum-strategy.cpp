#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int MAX = INT_MIN;
  int sum = 0;
  for (int num : nums) {
    sum += num;
    MAX = max(sum, MAX);
    if (sum < 0) sum = 0;
  }
  cout << MAX << endl;
  return MAX;
}
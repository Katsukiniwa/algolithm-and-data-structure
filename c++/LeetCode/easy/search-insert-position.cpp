#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> nums = {1, 3, 5, 6};
  int target;
  cin >> target;

  int res = 0;
  bool hit = false;
  for (int i = 0; i < nums.size(); ++i) {
    if (i == 0 && target <= nums.at(i)) {
      res = 0;
      hit = true;
      break;
    }
    if (target < nums.at(i)) {
      res = i;
      break;
    } else if (target == nums.at(i)) {
      res = i;
      break;
    }
  }
  if (res == 0 && !hit) res = nums.size();
  cout << res << endl;

  return res;
}
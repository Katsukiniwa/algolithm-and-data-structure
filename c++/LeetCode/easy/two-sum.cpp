#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    int i = 0, j = 1;
    for (int k = 0; k < nums.size() - 1; ++k) {
      for (int l = 1; l < nums.size(); ++l) {
        if (k != l && nums[k] + nums[l] == target) {
          i = k;
          j = l;
        }
      }
    }
    return {i, j};
  }
};

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  /**
   * @link https://www.delftstack.com/ja/howto/cpp/remove-element-from-vector-cpp/
   */
  int removeElement(vector<int> &nums, int val) {
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    return nums.size();
  }
};
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    int l = nums.size();
    vector<string> res;
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    return nums.size();
  }
};
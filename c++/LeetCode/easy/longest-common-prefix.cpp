#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  string longestCommonPrefix(vector<string>& strs) {
    if (strs.size() == 0) return "";
    sort(begin(strs), end(strs));
    string a = strs.at(0);
    string b = strs.at(strs.size() - 1);

    string ans;
    for(int i = 0; i < a.size(); i++){
      if(a.at(i) == b.at(i)){
        ans += a.at(i);
      }
      else {
        break;
      }
    }

    return ans;
  }
};
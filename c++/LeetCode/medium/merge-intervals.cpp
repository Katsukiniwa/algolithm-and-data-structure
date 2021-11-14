#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>

using namespace std;
using ll = long long;

class Solution {
public:
  vector<vector<int>> merge(vector<vector<int>> &intervals) {
    /**
     * intervalsのサイズが1以下の時はそのまま返す
     */
    if (intervals.size() <= 1) return intervals;

    /**
     * 降順で並べ替える
     */
    sort(intervals.begin(), intervals.end());

    /**
     * 返却するvector
     */
    vector<vector<int>> output;
    output.push_back(intervals.at(0));

    for (int i = 0; i < intervals.size(); ++i) {
      /**
       * outbackの末尾の後半の値がpush予定の要素の前半の値以上の場合は
       * outbackの末尾の後半の値とpush予定の要素の後半を比較して大きい方をoutbackの末尾の後半の値に代入する
       *
       * push予定の前半の値がoutbackの末尾の後半の値より大きい場合はそのまま追加する
       */
      if (output.back().at(1) >= intervals.at(i).at(0)) {
        output.back().at(1) = max(output.back().at(1), intervals.at(i).at(1));
      } else {
        output.push_back(intervals.at(i));
      }
    }

    return output;
  }
};

int main() {
  /**
   * Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
   * Output: [[1,6],[8,10],[15,18]]
   * Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
   */
  Solution solution = *new Solution();
}
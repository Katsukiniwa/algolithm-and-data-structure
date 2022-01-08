#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;
using ll = long long;

int main() {
  string s;
  /**
   * ([{しか入らない
   */
  stack<char> st;
  for (auto i:s) {
    /**
     * ({}]
     */
    if (i == '(' or i == '{' or i == '[') {
      st.push(i);
    } else {
      /**
       * topはstackの最後の要素への参照
       */
      if (st.empty() or (st.top() == '(' and i != ')') or (st.top() == '{' and i != '}') or (st.top() == '[' and i != ']')) {
        return false;
      }
      /**
       * 末尾を削除
       */
      st.pop();
    }
  }
  return st.empty();
}
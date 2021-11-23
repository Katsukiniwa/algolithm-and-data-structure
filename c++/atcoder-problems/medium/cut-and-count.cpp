#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

int main() {
  int N, result = 0;
  string S;
  cin >> N >> S;
  for (int i = 1; i < S.size() - 1; i++) {
    string X = S.substr(0, i), Y = S.substr(i);
    int tmp = 0;
    for (char z = 'a'; z <= 'z'; z++) {
      /**
       * XとYの両方に対象のアルファベットが含まれているかどうかをチェック
       */
      if (count(X.begin(), X.end(), z) * count(Y.begin(), Y.end(), z) != 0) {
        tmp++;
      }
    }
    /**
     * 現在のresultよりtmpが大きかった場合のみresultを更新する
     */
    result = max(tmp, result);
  }
  cout << result << endl;
}
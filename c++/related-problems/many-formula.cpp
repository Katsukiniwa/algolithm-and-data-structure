#include <iostream>

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  ll ans = 0;

  /**
   * N桁の数字に対して + を入れられる箇所はN-1箇所
   */
  for (int bit = 0; bit < (1 << (S.size() - 1)); bit++) {
    ll sum = 0;
    string T;
    for (int i = 0; i < S.size(); i++) {
      T += S[i];
      cout << "i: " <<  i << " " << "bit: " << bit << " " << "T: " << T << endl;
      if (bit & (1 << i)) {
        /**
         * @link https://cpprefjp.github.io/reference/string/stoll.html
         * stoll(str)は文字列strを数値として読み取ってlong long型の値に変換する
         */
        sum += stoll(T);
        T = "";
      }
    }
    sum += stoll(T);
    cout << sum << endl;
    T = "";
    ans += sum;
  }
  cout << ans << endl;
}
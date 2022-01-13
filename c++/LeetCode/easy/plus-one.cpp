#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> digits = {1, 2, 9};
  for (int i = digits.size() - 1; i >= 0; i--) {
    if (digits[i] != 9) {
      cout << digits.at(i) << endl;
      digits.at(i)++;
      return 0;
//      return digits;
    } else
      digits[i] = 0;
  }
  /**
   * ここに到達するということは全ての要素が0になっているということなので先頭に1を追加する
   */
  digits.insert(digits.begin(), 1);
//  return digits;
}
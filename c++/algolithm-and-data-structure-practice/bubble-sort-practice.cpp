#include <iostream>
#include <vector>

using namespace std;

int main() {
  /**
   * 要素数
   */
  int n;

  /**
   * / 整列したい配列ベクトル
   */
  vector<int> a(n);

  /**
   * 入力された配列サイズ・配列を取得
   */
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  /**
   * メインロジック
   */
  for (int i = 1; i < n; ++i) {
    int v = a[i];
    int j = i - 1;
    for (; j >= 0; --j) {
      if (a[j] > v) {
        a[j + 1] = a[j];
      } else {
        break;
      }
    }
    a[j + 1] = v;

    /**
     * 各ステップの配列を出力してみる
     */
    cout << "After Step " << i << ": ";
    for (int k = 0; k < n; ++k) cout << a[k] << " ";
    cout << endl;
  }

  return 0;
}
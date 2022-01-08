#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

int main() {
  int N, T;
  cin >> N >> T;

  int t;
  cin >> t;
  int next;
  int result = 0;
  for (int i = 0; i < N - 1; i++) {
    cin >> next;
    /**
     * 時間間隔がTより開いていた場合
     */
    if (T < next - t) {
      result += T;
    } else {
      result += next - t;
    }
    t = next;
  }
  /**
   * 最後は押されからTだけお湯が出るため
   */
  result += T;

  cout << result << endl;
}
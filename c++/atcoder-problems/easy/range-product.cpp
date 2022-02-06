#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (0 < a) {
    cout << "Positive" << endl;
    return 0;
  }
  if (a == 0) {
    cout << "Zero" << endl;
    return 0;
  }
  /**
   * ここから先はaは0未満
   */
   if (0 <= b) {
     cout << "Zero" << endl;
     return 0;
   }

   /**
    * ここから先はa, b共に0未満
    */
    if ((b - a) % 2 == 1) {
      cout << "Positive" << endl;
    } else {
      cout << "Negative" << endl;
    }
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
  string a, b;
  cin >> a >> b;
  string s = a + b;
  int tmp = stoi(s);
  double res = pow(tmp, 0.5);
  if(floor(res) == ceil(res)) cout << "Yes" << endl;
  else cout << "No" << endl;
}
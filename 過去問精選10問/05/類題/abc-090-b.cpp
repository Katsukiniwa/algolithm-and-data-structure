#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int result = 0;
  for(int i = A; i <= B; i++) {
    string s1 = to_string(i);
    string s2 = to_string(i);
    reverse(s2.begin(), s2.end());
    if(s1 == s2) result++;
  }
  
  cout << result << endl;
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int calculate(int n) {
  int sum = 0;
  while(n > 0) {
      sum += n % 10;
      n /= 10;
  }

  return sum;
}

int main() {
  int N;
  cin >> N;

  vector<int> v;

  for(int a = 1; a < N; a++) {
    int b = N - a;
    int a_goukei = calculate(a);
    int b_goukei = calculate(b);
    v.push_back(a_goukei + b_goukei);
  }
  
  sort(v.begin(), v.end());

  cout << v.at(0) << endl;
}

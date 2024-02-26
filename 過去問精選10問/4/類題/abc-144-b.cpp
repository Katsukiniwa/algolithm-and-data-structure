#include<iostream>
#include<vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> v;
  for(int i = 1; i < 10; i++) {
    for(int j = 1; j < 10; j++) {
      v.push_back(i * j);      
    }
  }

  
  for(int k = 0; k < 81; k++) {
    if (v[k] == N) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}

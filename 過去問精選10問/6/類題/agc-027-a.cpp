#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// TODO: やり直す
int main() {
  int N,x;
  cin >> N >> x;
  vector<int> a(N);
  for(int i = 0; i < N; i++) cin >> a[i];

  sort(a.begin(), a.end());
  for (int i = 0; i < N; i++){
    if(x - a[i] < 0){
      cout << i << endl;
      return 0;
    }
    x -= a[i];
  }
  cout << (x == 0 ? N : N-1) << endl;
}

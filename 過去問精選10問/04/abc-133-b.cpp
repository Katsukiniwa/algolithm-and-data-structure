#include<iostream>
using namespace std;

// TODO: やり直す
int main () {
  int N, D;
  cin >> N >> D;
  vector<vector<int>> X;
  for(int i = 1; i <= N; i++) {
    for(int j = 1; j <= D; j++) {
      cin >> X[i][j];
    }
  }

  int ans = 0;
  for (int i=0; i< N; i++) {
    for (int j=0; j< i; j++) {
      
      int a = 0;
      int sum = 0;
      for (int k=0; k<D; k++) {
        a = abs(X[i][k]-X[j][k]);
        sum += a*a;
      }
      
      int b = round(sqrt(sum));
      if (b*b == sum) {
        ans++;
      }
    }
  }
  
  cout << ans << endl;
	return 0;
}

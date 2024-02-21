#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<map>
#include<set> 
#include<utility>
using namespace std;

int main(){
  int N;
  cin>>N;
  vector<int>A(N);
  for(int i = 0; i < N; i++) cin >> A[i];
  int b=1,counter=0;
  for(int i = 0; i < N; i++) {
      b=A[b-1];
      counter++;
      if(b==2) {
          cout<<counter<<endl; 
          return 0;
      }
  }
  cout<<-1<<endl;
  return 0; 
}

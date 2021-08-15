//
// Created by 仁和活貴 on 2021/08/14.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  long long int n, j;
  cin >> n;
  long long int arr[n];
  for(int i = 0; i < n; i++) cin>>arr[i];
  sort(arr, arr+n);
  j = arr[n-1] - arr[0];
  cout << j << endl;
}
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

bool searchNumber(const int search[3], const int numList[], int N) {
  int index = 0;
  for (int num = 0; num < N; num++) {
    if (search[index] == numList[num]) {
      ++index;
      if (index == 3) return true;
    }
  }
  return false;
}

int main() {

  int N;
  scanf("%d", &N);
  int numList[30001];
  char S[30001];
  scanf("%s", S);
  for (int i = 0; i < N; i++) {
    numList[i] = (int) (S[i] - '0');
  }
  int count = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      for (int k = 0; k < 10; k++) {
        int search[] = {i, j, k};
        if (searchNumber(search, numList, N)) ++count;
      }
    }
  }

  printf("%d\n", count);


  return 0;
}

//int main() {
//  long long n=0;
//  string s;
//  cin >> n >> s;
//  vector<int> v;
//  for (int i = 2; i < n; ++i) {
//    for (int j = 1; j < i; ++j) {
//      for (int k = 0; k < j; ++k) {
//        int a = s[k] - '0';
//        int b = s[j] - '0';
//        int c = s[i] - '0';
//        v.push_back(100*a+10*b+c);
//      }
//    }
//  }
//  std::sort(v.begin(), v.end());
//  v.erase(std::unique(v.begin(), v.end()), v.end());
//  cout << v.size();
//}
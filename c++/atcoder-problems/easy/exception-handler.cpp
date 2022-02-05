#include <iostream>
#include <vector>

using namespace std;

int main() {

  int N, fst, snd;
  cin >> N;
  vector<int> vec(N);
  vector<int> T(N);

  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }

  T = vec;

  sort(T.begin(), T.end());

  fst = T.at(N - 1);
  snd = T.at(N - 2);

  for (int i = 0; i < N; i++) {
    if (vec.at(i) == fst) {
      cout << snd << endl;
    } else {
      cout << fst << endl;
    }
  }
}
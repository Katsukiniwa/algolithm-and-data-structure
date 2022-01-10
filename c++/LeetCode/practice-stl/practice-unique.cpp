#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVec(vector<int> &vec) {
  cout << "";
  for (int &it : vec) {
    cout << it << " ";
  }
  cout << endl;
}

void printStringVec(vector<string> &vec) {
  cout << "";
  for (string &it : vec) {
    cout << it << " ";
  }
  cout << endl;
}

int main() {
  vector<int> vec = {10, 40, 40, 20, 20, 30, 20, 20, 40};
  int l = vec.size();
  vector<string> res;
  sort(vec.begin(), vec.end());
  vec.erase(unique(vec.begin(), vec.end()), vec.end());
  printVec(vec);

  for (int j : vec) {
    res.push_back(to_string(j));
  }
  for (int i = 0; i < l - vec.size(); ++i) {
    res.emplace_back("_");
  }
  printStringVec(res);
}
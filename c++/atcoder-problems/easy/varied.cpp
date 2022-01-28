#include <iostream>
#include <vector>

using namespace std;

int main() {
  string S;
  vector<char> s_vector(S.size());
  cin >> S;
  int initial_length = S.size();
  for (char c: S) {
    s_vector.push_back(c);
  }
  sort(s_vector.begin(), s_vector.end());
  s_vector.erase(std::unique(s_vector.begin(), s_vector.end()), s_vector.end());
  if (initial_length == s_vector.size()) cout << "yes" << endl;
  else cout << "no" << endl;
}
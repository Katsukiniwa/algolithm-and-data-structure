#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  list<string> sentence;
  list<string> phrase;
  string s1[] = {"食パンを", "くわながら", ""};
  string s2[] = {"ある朝", "遅刻しそうな時間に", ""};
  string s3[] = {"出会い頭で", "美少女と", "衝突した", ""};
  string s4[] = {"全力で", "ダッシュしていると", ""};
  for (int i = 0; s1[i] != ""; i++) {
    sentence.push_back(s1[i]);
  }
  cout << "元の文章:\n";
  for (string s : sentence) { cout << s << " "; }
  cout << "\n";
  // 先頭にsplice()
  for (int i = 0; s2[i] != ""; i++) {
    phrase.push_back(s2[i]);
  }
  for (string p : phrase) { cout << p << " "; }
  cout << "\n";
  sentence.splice(sentence.begin(), phrase);
  cout << "先頭にsplice()した後の文章:\n";
  for (string s : sentence) { cout << s << " "; }
  cout << "\n";

  return 0;
}
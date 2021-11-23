#include <iostream>
#include <map>

using namespace std;
using ll = long long;

int main() {
  string S;
  S = "abcdefghabbccc";
  map<char, int> result;
  for (char z = 'a'; z <= 'z'; z++) {
    result.insert({z, count(S.begin(), S.end(), z)});
  }
  for (const auto&[key, value] : result) {
    cout << key << " => " << value << endl;
  }

  /*
   * { "apple" => 2, "lemon" => 4 } を作りたい
   */
  map<string, int> bucket;

  bucket.insert({"apple", 2});
  bucket.insert({"lemon", 4});
  cout << bucket.at("apple") << endl;
  cout << bucket.at("lemon") << endl;

  auto orange = make_pair("orange", 14);
  bucket.insert(orange);
  for (const auto&[key, value]: bucket) {
    cout << key << " => " << value << endl;
  }
}
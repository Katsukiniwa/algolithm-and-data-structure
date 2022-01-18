#include <iostream>
#include <queue>
using namespace std;

int main() {
  /* キュー */
  queue<int> Q;

  Q.push(3); // キューに 3 を追加 {} -> {3}
  Q.push(5); // キューに 5 を追加 {3} -> {3, 5}
  Q.push(7); // キューに 7 を追加 {3, 5} -> {3, 5, 7}

  cout << Q.size() << endl; // キューのサイズを出力: 3 が出る

  cout << Q.front() << endl; // キューの先頭要素: 3 が出る
  Q.pop(); // {3, 5, 7} -> {5, 7}
  cout << "size: " << Q.size() << endl;

  cout << Q.front() << endl; // キューの先頭要素: 5 が出る
  Q.pop(); // {5, 7} -> {7}

  Q.push(9); // 新たに 9 を追加 {7} -> {7, 9}
  cout << Q.front() << endl; // キューの先頭要素: 7 が出る

  Q.push(11); // {7, 9} -> {7, 9, 11}
  Q.pop(); // {7, 9, 11} -> {9, 11}
  Q.pop(); // {9, 11} -> {11}
  cout << Q.front() << endl; // キューの先頭要素: 11 が出る

  Q.pop(); // {11} -> {}

  // 空かどうかを check: empty の方を出力
  cout << (Q.empty() ? "empty" : "not empty") << endl;
}   
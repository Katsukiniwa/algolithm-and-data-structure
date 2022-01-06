#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;
using ll = long long;

class LRUCache {
public:
  /**
   * pairはfirstで1つめの要素、secondで2つめの要素にアクセスできる
   * { {1, 1} {2, 2} }
   */
  list<pair<int, int>> l;

  /**
   * unordered_mapは同一キーの要素を複数格納できず、格納順が規定されていないコンテナ
   * { 1: {1, 1}, 2: {2, 2} }
   */
  unordered_map<int, list<pair<int, int>>::iterator> m;

  int size;

  explicit LRUCache(int capacity) {
    size = capacity;
  }

  int get(int key) {
    /**
     * unordered_map::endは最終要素の次を指すイテレータを取得する
     */
    if (m.find(key) == m.end()) {
      cout << -1 << endl;
      return -1;
    }

    /**
     * 呼び出されるので該当のpairをlの先頭に移動する
     */
    l.splice(l.begin(), l, m.at(key));

    cout << m.at(key)->second << endl;

    return m.at(key)->second;
  }

  void put(int key, int value) {
    /**
     * mで同じキーの要素が見つかった場合、該当のpairをlの先頭に移動する
     */
    if (m.find(key) != m.end()) {
      l.splice(l.begin(), l, m.at(key));
      m.at(key)->second = value;
      return;
    }

    /**
     * 上記のif文で同じキーの要素に対しての処理が実行されるので
     * このif文内の処理が実行されるのは新しいpairが渡されかつlが満タンだった場合
     */
    if (l.size() == size) {
      /**
       * list::backは末尾要素への参照を取得する
       * firstで取得したペアのkeyを取得する
       */
      auto d_key = l.back().first;

      /**
       * 末尾要素を削除する
       */
      l.pop_back();

      /**
       * 指定した要素を削除する
       */
      m.erase(d_key);
    }
    l.push_front({key, value});
    m[key] = l.begin();
  }
};

int main() {
  LRUCache lRUCache = *new LRUCache(2);
  lRUCache.put(1, 2);      // cache is {1=2}
  lRUCache.put(2, 5);      // cache is {1=2, 2=5}
  lRUCache.get(1);               // return 2
  lRUCache.put(3, 6);      // LRU key was 2, evicts key 2, cache is {1=2, 3=6}
  lRUCache.get(2);               // returns -1 (not found)
  lRUCache.put(4, 7);      // LRU key was 1, evicts key 1, cache is {4=7, 3=6}
  lRUCache.get(1);               // return -1 (not found)
  lRUCache.get(3);               // return 6
  lRUCache.get(4);               // return 7
}
#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;
using ll = long long;

class LRUCache {
public:
  list<pair<int, int>> l;
  unordered_map<int, list<pair<int, int>>::iterator> m;
  int size;

  explicit LRUCache(int capacity) {
    size = capacity;
  }

  int get(int key) {
    if (m.find(key) == m.end()) {
      return -1;
    }
    l.splice(l.begin(), l, m[key]);
    return m[key]->second;
  }

  void put(int key, int value) {
    if (m.find(key) != m.end()) {
      l.splice(l.begin(), l, m[key]);
      m[key]->second = value;
      return;
    }
    if (l.size() == size) {
      auto d_key = l.back().first;
      l.pop_back();
      m.erase(d_key);
    }
    l.push_front({key, value});
    m[key] = l.begin();
  }
};

int main() {
  LRUCache lRUCache = *new LRUCache(2);
  lRUCache.put(1, 1); // cache is {1=1}
  lRUCache.put(2, 2); // cache is {1=1, 2=2}
  lRUCache.get(1);    // return 1
  lRUCache.put(3, 3); // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
  lRUCache.get(2);    // returns -1 (not found)
  lRUCache.put(4, 4); // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
  lRUCache.get(1);    // return -1 (not found)
  lRUCache.get(3);    // return 3
  lRUCache.get(4);    // return 4
}
#include <iostream>
#include <queue>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;

  TreeNode() : val(0), left(nullptr), right(nullptr) {}

  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isSameTree(TreeNode *p, TreeNode *q) {
  queue<TreeNode *> queue;
  queue.push(p);
  queue.push(q);
  cout << queue.front()->right->right->val << endl;
  while (!queue.empty()) {
    // 先頭要素を取得
    TreeNode* q2 = queue.front();

    cout << q2->val;

    // 先頭要素を削除
    queue.pop();

    // 先頭要素を取得
    TreeNode *q1 = queue.front();

    // 先頭要素を削除
    queue.pop();

    if (q1 == nullptr && q2 == nullptr) continue;
    if (q1 == nullptr || q2 == nullptr) return false;
    if (q1->val != q2->val) return false;
    queue.push(q1->left);
    queue.push(q2->left);
    queue.push(q1->right);
    queue.push(q2->right);
  }
  return true;
}

int main() {
  bool res = isSameTree({}, {});
  if (res) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
}
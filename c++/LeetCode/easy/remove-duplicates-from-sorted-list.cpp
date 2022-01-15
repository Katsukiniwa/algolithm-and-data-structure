#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;

  ListNode() : val(0), next(nullptr) {}

  ListNode(int x) : val(x), next(nullptr) {}

  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *deleteDuplicates(ListNode *head) {
  if (!head) return head;
  ListNode *tmp = head;

  while (tmp && tmp->next) {
    if (tmp->val == tmp->next->val) {
      tmp->next = tmp->next->next;
    } else {
      tmp = tmp->next;
    }
  }

  return head;
}

int main() {
  ListNode *q;
  q->val = 2;
  deleteDuplicates(q);
}
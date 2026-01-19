/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode() : val(0), next(nullptr) {}
*     ListNode(int x) : val(x), next(nullptr) {}
*     ListNode(int x, ListNode *next) : val(x), next(next) {}
* };
*/

class Solution {
public:
  void reorderList(ListNode* head){
      ListNode* slow = head;
      ListNode* fast = head;

      while (fast != nullptr && fast->next != nullptr){
          slow = slow->next;
          fast = fast->next->next;
      }
      ListNode* l2 = slow->next;
      slow->next = nullptr;
      ListNode* p1 = nullptr;
      ListNode* c1 = l2;

      while (c1 != nullptr) {
          ListNode* t1 = c1;
          c1 = c1->next;
          t1->next = p1;
          p1 = t1;
      }
      l2 = p1;
      ListNode* c2 = head;
      ListNode* ptr = l2;

      while (c2 != nullptr && ptr != nullptr) {
          ListNode* t2 = c2;
          c2 = c2->next;
          t2->next = ptr;
          ListNode* l2sec = ptr->next;
          ptr->next = c2;
          ptr = l2sec;
      }
  }
};
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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* p = head;
        ListNode* q = head->next;
        ListNode* h = new ListNode(head->val);
        ListNode* t = h;
        while(q != NULL){
           int d = gcd(p->val,q->val);
           ListNode* dummy = new ListNode(d);
           t->next = dummy;
           ListNode* dummy2 = new ListNode(q->val);
           dummy->next = dummy2;
           t = dummy2;

           p = p->next;
           q = q->next;
        }


        return h;
    }
};
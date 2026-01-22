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
        ListNode*cur=head;
        while(cur->next) {
            ListNode* temp = cur->next;
            int v = gcd(cur->val, cur->next->val);
            ListNode* nd = new ListNode(v, temp);
            cur->next=nd;
            cur = cur->next->next;
        }
        return head;
    }
};
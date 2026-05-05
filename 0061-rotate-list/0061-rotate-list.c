/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL || head->next==NULL)
        return head;
    struct ListNode * tail=head;
    int n=1;
    while(tail->next!=NULL)
    {
        n++;
        tail=tail->next;
    }
    k=k%n;
    if(k==0)
        return head;
    struct ListNode* newtail=head,* newhead=NULL;
    for(int i=1;i<n-k;i++)
        newtail=newtail->next;
    newhead=newtail->next;
    tail->next=head;
    newtail->next=NULL;
    return newhead;

}
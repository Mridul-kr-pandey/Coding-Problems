class Solution {
public:
    
    
    struct compare
    {
        bool operator()(ListNode* a, ListNode *b)
        {
            return a->val > b->val;   // min heap  
        }
    };
    
    ListNode* mergeKLists(vector<ListNode*>& arr) 
    {
        int j;
        // for(j = 0;j< arr.size();j++){
        //     if(arr[j] != NULL)
        //         break;
        // }
        if(j == arr.size()){ // all list empty
            return NULL;
        }
        
        priority_queue<ListNode*, vector<ListNode*>, compare>pq;   
        for(int i = 0;i<arr.size();i++){
            if(arr[i] != NULL)
                pq.push(arr[i]);
        }
        
        ListNode *mergeH = new ListNode(0);
        ListNode *last = mergeH;
        while(!pq.empty())
        {
            ListNode* curr = pq.top();
            pq.pop();
            
            last->next = curr;
            last = last->next;
            
            if(curr != NULL && curr->next != NULL){
                pq.push(curr->next);
            }
            
        }
        return mergeH->next;
    }
};
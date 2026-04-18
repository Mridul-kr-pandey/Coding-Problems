class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        deque<int>dq;

        int n=deck.size();
        for(int i=n-1;i>=0;i--){
            if(!dq.empty()){
                dq.push_front(dq.back());
                dq.pop_back();
            }
            dq.push_front(deck[i]);
        }
        vector<int>ans(dq.begin(),dq.end());
        return ans;
    }
};
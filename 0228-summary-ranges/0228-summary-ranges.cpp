class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size(),i=0;
        vector<string> ans;
        while(i<n){
            int start=nums[i];
            int prev=start;
            i++;
            while (i < n && nums[i] == prev + 1) {
                prev++;
                i++;
            }
            if (start == prev) {
                ans.push_back(to_string(start)); 
            } else {
                ans.push_back(to_string(start) + "->" + to_string(prev)); 
            }
        }
        return ans;
    }
};
            
       
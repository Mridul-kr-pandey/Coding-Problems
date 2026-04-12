class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int smallest=nums[0],ans=-1;
        for(int i=1;i<nums.size();i++){
            smallest=min(smallest,nums[i]);
            ans=max(ans,nums[i]-smallest);
        }
        return ans==0?-1:ans;
    }
};
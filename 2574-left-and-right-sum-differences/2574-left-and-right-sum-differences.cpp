class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int suffix=0;
        for(int i=1;i<nums.size();i++)
        {
            ans[i]+=nums[i-1]+ans[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            suffix+=nums[i+1];
            ans[i]=abs(ans[i]-suffix);
        }
        return ans;
    }
};
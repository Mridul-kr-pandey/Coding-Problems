class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>count;
        count[0]=1;
        int odd=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1) odd++;
            ans+=count[odd-k];
            count[odd]++;
        }
        return ans;
    }
};
class Solution {
public:
    int longestMountain(vector<int>& nums) 
    {
        int n=nums.size();
        int ans=0;
        for(int i=1;i<n-1;i++)
        {
            if(nums[i-1]<nums[i] && nums[i]>nums[i+1])
            {
                int s=i;
                int e=i;
                while(s>0)
                {
                    if(nums[s]>nums[s-1])
                        s--;
                    else
                        break;
                }
                while(e<n-1)
                {
                    if(nums[e]>nums[e+1])
                        e++;
                    else
                        break;
                }
                ans=max(ans,e-s+1);
            }
        }
        return ans;
    }
};
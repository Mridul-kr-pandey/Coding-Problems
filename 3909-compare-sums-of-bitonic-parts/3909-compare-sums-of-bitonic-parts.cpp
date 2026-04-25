class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n=nums.size(),p=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[p]) p=i;
        }
        long long a=0,d=0;
        for(int i=0;i<=p;i++) a+=nums[i];
        for(int i=p;i<n;i++) d+=nums[i];
        if(a>d) return 0;
        if(d>a) return 1;
        return -1;
    }
};
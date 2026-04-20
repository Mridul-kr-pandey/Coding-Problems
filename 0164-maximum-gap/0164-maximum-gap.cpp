class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        int gap=0;
        if (nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for (int i=0;i<n;i++){
            int sub=nums[i+1]-nums[i];
            if (sub>gap){
                gap=sub;
            }
        }
        return gap;
    }
};
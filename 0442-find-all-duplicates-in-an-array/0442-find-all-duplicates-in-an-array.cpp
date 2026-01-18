class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>dupli;
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i])-1;
            nums[index]=-nums[index];
            if(nums[index]>0){
                dupli.push_back(index+1);
            }
        }
        return dupli;
    }
};
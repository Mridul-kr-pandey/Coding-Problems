class Solution {
public:
    unordered_map<int,vector<int>> shivam;
    Solution(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            shivam[nums[i]].push_back(i);
        }
    }
    int pick(int target){
        vector<int>temp=shivam[target];
        return temp[rand()%temp.size()];
    }
};
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
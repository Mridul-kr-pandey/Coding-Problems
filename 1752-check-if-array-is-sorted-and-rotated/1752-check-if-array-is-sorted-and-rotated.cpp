class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                c++;
            }
        }
        if(nums[n-1]>nums[0]){
            c++;
        }
        return c<=1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
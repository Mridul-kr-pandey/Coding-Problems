class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>>rev=mat;
        k=k%mat[0].size();
        for(int i=0;i<k;i++){
            for(int i=0;i<rev.size();i++){
                reverse(rev[i].begin()+1,rev[i].end());  
                reverse(rev[i].begin(),rev[i].end());
            }
        }
        if(mat==rev) return true;
        return false;
    }
};
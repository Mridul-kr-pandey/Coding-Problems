class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) 
    {
        int n=words.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(words[(startIndex+i)%n]==target){
                mini=min(mini,i);
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(words[(startIndex-i+n)%n]==target){
                mini=min(mini,i);
                break;
            }
        }
        if(mini==INT_MAX) return -1;
        return mini;
    }
};
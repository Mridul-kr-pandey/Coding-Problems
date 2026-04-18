class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        if(n==1) return true;
        
        int count=0;
        for(int i=0;i<n;i++){
            if(isupper(word[i])){
                count++;
            }
        }
        if(count==n || count==0) return true;
        if(count==1 && isupper(word[0])) return true;
        return false;
    }
};
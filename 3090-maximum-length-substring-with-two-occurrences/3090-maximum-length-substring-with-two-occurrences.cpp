class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0,maxLen=0;
        unordered_map<char,int>freqMp;
        for(int r=0;r<s.size();r++){
            freqMp[s[r]]++;
            while(freqMp[s[r]]>2){
                freqMp[s[l]]--;
                if(freqMp[s[l]]==0){
                    freqMp.erase(s[l]);
                }
                l++;
            }
            maxLen=max(maxLen,r-l+1);
        }
        return maxLen;
    }
};
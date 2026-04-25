class Solution {
public:
    bool validDigit(int n, int x) {
        string s=to_string(n);
        char ch=x+'0';
        for(int i=0;i<s.length();i++){
            if(s[i]==ch && s[0]!=ch){
                return true;
            }
        }
        return false;
    }
};
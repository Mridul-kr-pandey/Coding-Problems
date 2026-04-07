class Solution {
public:
    vector<vector<string>>result;
    vector<string>path;
    void backtrack(string&s,int start){
        if(start==s.size()){
            result.push_back(path);
            return;
        }
        for(int i=start;i<s.size();i++){
            if(ispalindrome(s,start,i)){
                path.push_back(s.substr(start,i-start+1));
                backtrack(s,i+1);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        backtrack(s,0);
        return result;
    }
    bool ispalindrome(string &s,int l,int r){
        while(l<r){
            if(s[l++]!=s[r--])return false;
        }
        return true;
    }
};
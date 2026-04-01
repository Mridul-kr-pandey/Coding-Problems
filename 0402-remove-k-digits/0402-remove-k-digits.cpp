class Solution {
public:
    string removeKdigits(string num, int k) {
        string s = "";
        for(char ch:num){
            while(!s.empty() && k>0 && s.back()>ch){
                s.pop_back();
                k--;
            }
            s.push_back(ch);
        }
        while(k>0){
            s.pop_back();
            k--;
        }
        int i=0;
        while(i<s.size()&&s[i]=='0'){
            i++;
        }
        string str = s.substr(i);
        if(str == ""){
            return "0";
        }else{
            return str;
        }
    }
};
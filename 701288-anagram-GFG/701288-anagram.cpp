class Solution {
public:
    bool areAnagrams(string m, string a) {
        if(m.size()!=a.size())
            return false;
        
        sort(m.begin(), m.end());
        sort(a.begin(), a.end());

        return m==a;
    }
};
class Solution {
public:
    string largestEven(string s) {
        if (s.length() == 1 && s[0] == '1') {
            return "";
        }
        if (s.back() == '2') {
            return s;
        }
        while (!s.empty() && s.back() == '1') {
            s.pop_back();
        }
        return s;
    }
};

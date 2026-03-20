class Solution {
public:
int maximumLengthSubstring(string s) {
        vector<int> seen(26);
        int left = 0, result = 0;
        for (int right = 0; right < s.length(); right++) {
            int idx = int(s[right]) % 97;
            seen[idx]++;
            while (seen[idx] > 2) {
                seen[int(s[left]) % 97]--;
                left++;
            }
            result = max(result, right - left + 1);
        }
        return result;
    }
};
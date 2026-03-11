class Solution {
public:
    int findComplement(int num) {
        int n = num;
        unsigned long long x = 1;

        while(x <= n){
            n = n ^ x;
            x = x << 1;
        }

        return n;
    }
};

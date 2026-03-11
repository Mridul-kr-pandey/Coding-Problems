class Solution {
public:
    int bitwiseComplement(int n) {
        int x=n|1;
        for(int i=0;i<=4;i++)
            x|=x>>(1<<i);
        return n^x;
    }
};
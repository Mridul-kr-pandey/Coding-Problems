class Solution {
public:
    vector<int> evenOddBit(int n) {
        int odd=0;
        int even=0;
        int i=0;
        while(n>0 && i<32)
        {
            if( n>>i & 1)
            {
                if (i%2==0)
                even++;
                else
                odd++;
            }
            i++;
        }
        return {even,odd};
    }
};
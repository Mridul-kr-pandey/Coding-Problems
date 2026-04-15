class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int ans=0,base=1;
        while(num1||num2||num3){
            ans+=base*min(min(num1%10,num2%10),num3%10);
            num1/=10;
            num2/=10;
            num3/=10;
            base*=10;
        }
        return ans;
    }
};
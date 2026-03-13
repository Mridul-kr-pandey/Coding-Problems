class Solution {
public:
    int countOperations(int num1, int num2) {
    if (num1 == 0 || num2 == 0) return 0;
    if (num1 == num2) return 1;
    int res = 0;
    while (num1 != num2) {
        while (num1 > num2) {
            num1 -= num2;
            res++;
        }
        while (num2 > num1) {
            num2 -= num1;
            res++;
        }
    }
    return res + 1;
}
};
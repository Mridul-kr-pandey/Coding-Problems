class Solution(object):
    def rotatedDigits(self, n):
        """
        :type n: int
        :rtype: int
        """
        res = 0
        for i in range(n+1):
            tmp = set(str(i))
            if (tmp - {'1', '0', '8'}) and not tmp & {'3', '7', '4'}:
                res += 1
        return res
        
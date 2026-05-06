class Solution(object):
    def finalString(self, s):
        """
        :type s: str
        :rtype: str
        """
        sushi=""
        for ch in s:
            if ch=='i':
                sushi=sushi[::-1]
            else:
                sushi+=ch
        return sushi
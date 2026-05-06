class Solution(object):
    def possibleStringCount(self, word):
        """
        :type word: str
        :rtype: int
        """
        n=len(word)
        x=word[0]
        res=1
        for i in range(1,n):
            if x==word[i]:
                res+=1
            x=word[i]
        return res
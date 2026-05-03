class Solution(object):
    def commonChars(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        l=list(words[0])
        for i in words:
            k=[]
            for j in i:
                if j in l:
                    k.append(j)
                    l.remove(j)
            l=k
        return l
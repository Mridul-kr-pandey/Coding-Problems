class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        if len(s) == 0:
            return s
        s_lst = list(s)
        vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        left, right = 0, len(s_lst)-1
        while left < right:
            if s_lst[left] in vowels and s_lst[right] in vowels:
                s_lst[left], s_lst[right] = s_lst[right], s_lst[left]
                left += 1
                right -= 1
            elif s_lst[left] not in vowels:
                left += 1
            elif s_lst[right] not in vowels:
                right -= 1
        return "".join(s_lst)
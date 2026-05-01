class Solution(object):
    def maxRotateFunction(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        total_sum = sum(nums)
        rotation_sum = sum(i * num for i, num in enumerate(nums))
        
        max_sum = rotation_sum
        for i in range(1, n):
            rotation_sum += total_sum - n * nums[n - i]
            max_sum = max(max_sum, rotation_sum)
        
        return max_sum
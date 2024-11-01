class Solution(object):
    def maxSubArray(self, nums):
        \\\
        :type nums: List[int]
        :rtype: int
        \\\
        sumation = 0
        max_sub = nums[0]

        for i in nums:
            if sumation < 0:
                sumation = 0
            sumation = sumation + i
            max_sub = max(sumation, max_sub)
        
        return max_sub
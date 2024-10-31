class Solution(object):
    def twoSum(self, nums, target):
        \\\
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        \\\
        pervMap = {} #the value and index
        for i, value in enumerate(nums):
            difference = target - value
            if difference in pervMap:
                return [pervMap[difference], i]

            pervMap[value] = i
        return 
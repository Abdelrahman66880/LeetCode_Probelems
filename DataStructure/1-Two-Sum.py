class Solution(object):
    def twoSum(self, nums, target):
        \\\
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        \\\
        diff_map = {}
        for i, num in enumerate(nums):
            diff = target - num
            if diff in diff_map:
                return [diff_map[diff], i]
            diff_map[num] = i
        print(diff_map)
        return []
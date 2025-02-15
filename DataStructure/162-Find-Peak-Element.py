class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        left = 0
        right = len(nums) - 1
        while left <= right:
            mid = (left + right) // 2
            # shift the left pointer
            if mid < len(nums) - 1 and nums[mid] < nums[mid + 1]:
                left = mid + 1
            # shift the right pointer
            elif (mid > 0) and (nums[mid] < nums[mid - 1]):
                right =  mid - 1
            else:
                return mid


\\\
        |3|
    2
1           1              >>>>the peek is 3
\\\

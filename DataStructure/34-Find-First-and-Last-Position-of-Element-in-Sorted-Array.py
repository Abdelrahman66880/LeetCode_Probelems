class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        return [self.binarySearch(nums, target, 1), self.binarySearch(nums, target, 0)]
    def binarySearch(self, nums, target, flage):
        i = -1
        left, right = 0, len(nums) - 1
        while left<=right:
            mid = left + ((right - left) // 2)
            if target > nums[mid]:
                left = mid + 1
            elif target < nums[mid]:
                right = mid - 1
            else:
                i = mid
                if flage:
                    right = mid - 1
                else:
                    left = mid + 1
        return i
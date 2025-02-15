class Solution:
    def findMin(self, nums: List[int]) -> int:
        if len(nums) == 2:
            return min(nums[0], nums[1])

        temp_min = float(\inf\)
        left, right = 0, len(nums) - 1
        while left <=right:
            target = nums[left]
            mid = (right + left) // 2
            # to handle the already sorted array
            if nums[left] < nums[right]:
                temp_min = min(temp_min, nums[left])
                break
            # split the array into sorted haves
            temp_min = min(temp_min, nums[mid])
            if nums[mid] >= target:
                left = mid + 1 #the min will be in the right side
            else:
                right = mid - 1
        
        return temp_min
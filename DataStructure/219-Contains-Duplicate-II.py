class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        if nums is None:
            return False
        
        nums_to_index = {}

        for i in range(len(nums)):
            if nums[i] in nums_to_index:
                if abs(nums_to_index[nums[i]] - i) <= k:
                    return True
            nums_to_index[nums[i]] = i
        return False
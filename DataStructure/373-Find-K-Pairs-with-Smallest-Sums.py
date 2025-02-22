import heapq
class Solution:
    def kSmallestPairs(self, nums1: List[int], nums2: List[int], k: int) -> List[List[int]]:
        # Edge case
        if not nums1 or not nums2:
            return []

        heap = []
        for i in range(min(k, len(nums1))):
            sumation = nums1[i] + nums2[0]
            heapq.heappush(heap, (sumation, i, 0))

        result = []
        while heap and len(result) < k:
            current_sum, i, j = heapq.heappop(heap)
            result.append([nums1[i], nums2[j]])
            if j + 1 < len(nums2):
                heapq.heappush(heap, (nums1[i] + nums2[j + 1], i, j + 1))

        return result      
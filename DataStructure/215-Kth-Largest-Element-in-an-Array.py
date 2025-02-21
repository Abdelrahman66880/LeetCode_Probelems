import heapq
class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        sorted_arr = self.heapSort(nums)
        print(sorted_arr)
        return sorted_arr[-k]

    def heapSort(self, arr):
        heapq.heapify(arr)
        new_arr = [0] * len(arr)
        for i in range(len(arr)):
            minmum = heapq.heappop(arr)
            new_arr[i] = minmum
        return new_arr
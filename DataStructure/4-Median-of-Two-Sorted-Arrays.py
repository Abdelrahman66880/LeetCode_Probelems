class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        \\\
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        \\\
        array = nums1 + nums2
        array.sort()
        n = len(nums1)
        m = len(nums2)
        s = n + m
        if s % 2 == 0:
            pos1 = (s / 2) - 1
            pos2 = (pos1 + 1)
            median = (array[pos1] + array[pos2]) / 2.0
        else:
            pos3 = ((s + 1) / 2) - 1
            median = array[pos3]
        return float(median)
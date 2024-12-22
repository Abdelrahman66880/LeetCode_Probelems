class Solution(object):
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        # create hashmap contains the numbers and their index
        numAndIndex = {n:i for i, n in enumerate(nums1)}

        # create a defualt value of -1
        result = [-1] * len(nums1)

        for i in range(len(nums2)):
            if nums2[i] not in numAndIndex:
                continue
            for j in range(i+1, len(nums2)):
                if nums2[j] > nums2[i]:
                    index = numAndIndex[nums2[i]] #to get the correct index to update the result array
                    result[index] = nums2[j]
                    break
        
        return result

        
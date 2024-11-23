class Solution(object):
    def reverseString(self, s):
        \\\
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        \\\
        n = len(s)
        left = 0
        right = n - 1

        while left < right:
            s[left], s[right] = s[right], s[left]
            left = left + 1
            right = right - 1
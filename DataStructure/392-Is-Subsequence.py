class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i, j = 0, 0
        while i < len(t):
            if j < len(s) and t[i] == s[j]:
                j = j+1
            i = i + 1
        return j == len(s)
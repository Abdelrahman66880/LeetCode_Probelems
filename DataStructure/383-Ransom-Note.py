class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        chars_count = {}
        for i in magazine:
            if i in chars_count:
                chars_count[i] += 1
            else:
                chars_count[i] = 1

        for j in ransomNote:
            if chars_count.get(j, 0) == 0:
                return False
            chars_count[j] -= 1

        return True   
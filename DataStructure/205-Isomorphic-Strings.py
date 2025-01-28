class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
            return False

        s_map, t_map = {}, {}

        for i in range(len(s)):
            s_char, t_char = s[i], t[i]

            if s_map.get(s_char) != t_map.get(t_char):
                return False
            s_map[s_char] = i
            t_map[t_char] = i

        return True

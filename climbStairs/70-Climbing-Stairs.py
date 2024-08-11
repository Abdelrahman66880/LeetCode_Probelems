class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        # using Dynamic Programming

        first, second = 1, 1

        for i in range(n - 1):
            temp = first
            first = first + second
            second = temp

        return first
        
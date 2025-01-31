class Solution(object):
    def climbStairs(self, n, dp = {}):
        \\\
        :type n: int
        :rtype: int
        \\\
        if n <= 0: return 1
        if n == 1: return 1
        if n in dp:
            return dp[n]
        dp[n] = self.climbStairs(n - 1) + self.climbStairs(n-2)
        return dp[n]
        
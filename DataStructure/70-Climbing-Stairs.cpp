#include <unordered_map>
class Solution {
public:
    unordered_map<int, int> dp;
    int climbStairs(int n) {
        if (n <= 0) return 1;
        if (n == 1) return 1;

        if (dp.count(n) > 0)
        {
            return dp[n];
        }
        dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return dp[n];

    }
};
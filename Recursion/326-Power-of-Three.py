class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n == 0 or n < 0:
            return False

        if n == 1.0:
            return True

        if n % 3 != 0:
            return False
        
        return self.isPowerOfThree(float(n / 3))

class Solution(object):

    def isHappy(self, n):
        \\\
        :type n: int
        :rtype: bool
        \\\
        # if n < 9:
        #     return False
        def get_digits(number):
            digits = []
            while number > 0:
                mod = number % 10
                digits.append(mod)
                number //= 10
            return digits
    # =========================
        seen_numbers = set()
        
        while n != 1 and n not in seen_numbers:
            seen_numbers.add(n)
            n = sum(i ** 2 for i in get_digits(n))
        print(seen_numbers)
        return n == 1
def gcd(a, b):
        return a if b == 0 else gcd(b, a % b)
class Solution:
    def maxPoints(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        if not points:
            return 0
        max_points_in_line = 0 #in the case of single point
        for i in range(len(points)):
            slops = {}
            duplicates = 1 #for repetead points
            for j in range(1+i, len(points)):
                dy = points[i][1] - points[j][1]
                dx = points[i][0] - points[j][0]
                if dy == 0 and dx == 0:
                    duplicates += 1
                else:
                    common_divisor = gcd(dy, dx)
                    slop = (dy // common_divisor, dx // common_divisor)
                    if slop in slops:
                        slops[slop] += 1
                    else:
                        slops[slop] = 1
            if slops:
                max_slope_count = max(slops.values())
            else:
                max_slope_count = 0
            current_max = max_slope_count + duplicates
            max_points_in_line = max(max_points_in_line, current_max)
        print(slops)
        
        return max_points_in_line

        
        
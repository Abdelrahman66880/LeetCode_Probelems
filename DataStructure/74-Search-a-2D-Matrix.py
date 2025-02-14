class Solution(object):
    def searchMatrix(self, matrix, target):
        \\\
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        \\\
        if not matrix or not matrix[0]:
            return False

        top = 0
        bottom = len(matrix) - 1
        # find the correct row
        while top <= bottom:
            row = (top + bottom) // 2
            if matrix[row][-1] < target:
                top = row + 1
            elif matrix[row][0] > target:
                bottom = row - 1
            else:
                break

        if top > bottom:
            return False

        # find the element in the certain row
        row = (top + bottom) // 2
        left = 0
        right = len(matrix[0]) - 1

        while left <= right:
            mid = (left + right) // 2
            if matrix[row][mid] == target:
                return True
            elif matrix[row][mid] < target:
                left = mid + 1
            else:
                right = mid - 1

        return False

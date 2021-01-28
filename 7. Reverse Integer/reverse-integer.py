class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        isNegative = False
        if x < 0:
            isNegative = True
            x = -x
        reverse_x = int(str(x)[::-1])
        if reverse_x > 2**31-1 or reverse_x < -(2**31):
            return 0
        if isNegative:
            return -reverse_x
        return reverse_x

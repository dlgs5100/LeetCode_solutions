class Solution(object):
    def twoSum(self, nums, target):
        table = {}
        for i, num in enumerate(nums):
            if target-num in table:
                return [table[target-num], i]
            table[num] = i
        return []

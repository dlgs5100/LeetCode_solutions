class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if not strs:
            return ""
        result=''
        for i, c in enumerate(strs[0]):
            for s_index in range(1, len(strs)):
                try:
                    if c != strs[s_index][i]:
                        return result
                except IndexError:
                    return result
            result += c
        return result

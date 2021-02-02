class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        dict = {'(':')', '[':']', '{':'}'}
        stack = []
        while(s):
            if s[0] in dict:
                stack.append(dict[s[0]])
                s = s[1:]
            else:
                if stack and s[0] == stack[-1]:
                    s = s[1:]
                    stack.pop(-1)
                else:
                    return False
        if not stack:
            return True
        else:
            return False

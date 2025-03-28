class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        dict = {}
        for i in range(len(s)):
            if s[i] in dict:
                if (dict[s[i]] != t[i]):
                    return False
            else:
                if (t[i] in dict.values()):
                    return False
                dict[s[i]] = t[i]
        return True


sol = Solution()
print(sol.isIsomorphic("badc", "baba"))

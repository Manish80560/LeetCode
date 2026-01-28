class Solution(object):
    def strStr(self, haystack, needle):
        haystack = haystack.replace(needle, '*')

        if '*' in haystack:
            return haystack.index('*')
        return -1
        
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        freq = Counter(s)
        for c in t:
            freq[c] -= 1

        return all(x == 0 for x in freq.values())

#Link: https://leetcode.com/problems/valid-anagram/description/
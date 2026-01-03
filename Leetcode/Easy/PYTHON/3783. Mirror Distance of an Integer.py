class Solution:
    def mirrorDistance(self, n: int) -> int:
        return abs(n-int(str(n)[::-1]))

#link: https://leetcode.com/problems/mirror-distance-of-an-integer/description/
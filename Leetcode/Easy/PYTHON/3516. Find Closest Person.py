class Solution:
    def findClosest(self, x: int, y: int, z: int) -> int:
        d1, d2 = abs(z - x), abs(z - y)
        return 1 if d1 < d2 else 2 if d2 < d1 else 0

# Link: https://leetcode.com/problems/find-closest-person/description/
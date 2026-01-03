class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        return bin(x^y).count("1")

#link: https://leetcode.com/problems/hamming-distance/description/
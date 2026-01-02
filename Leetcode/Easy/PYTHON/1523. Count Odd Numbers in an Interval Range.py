class Solution:
    def countOdds(self, low: int, high: int) -> int:
        return (high + 1) // 2 - low // 2

#Short Thought Process:
# To count odd numbers in the interval [low, high], we can use the formula: (high + 1) // 2 - low // 2.
# This formula works because (high + 1) // 2 gives the count of odd numbers from 1 to high,
# and low // 2 gives the count of odd numbers from 1 to low - 1.
# By subtracting these two counts, we get the count of odd numbers in the interval [low, high].\
    
# https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
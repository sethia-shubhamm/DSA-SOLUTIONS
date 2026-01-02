class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        freq={}
        for i in nums:
            if i not in freq:
                freq[i]=1
            else:
                return i
        return 0
    
# https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
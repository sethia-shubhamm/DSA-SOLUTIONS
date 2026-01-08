class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        freq=Counter(nums)
        for i in nums:
            if(freq[i]>1): return True
        return False
        
#Link: https://leetcode.com/problems/contains-duplicate/description/
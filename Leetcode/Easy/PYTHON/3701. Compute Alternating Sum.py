class Solution:
    def alternatingSum(self, nums: List[int]) -> int:
        ans=0
        for i in range(0,len(nums)):
            if (i%2==0): ans+=nums[i]
            else: ans-=nums[i]
        return ans

# https://leetcode.com/problems/compute-alternating-sum/
class Solution:
    def minimumAbsDifference(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        ans=[]
        minDiff=10**100
        for i in range(1,len(nums)):
            if(nums[i]-nums[i-1]<minDiff):
                minDiff=nums[i]-nums[i-1]
        for i in range(1,len(nums)):
            if(nums[i]-nums[i-1]==minDiff):
                ans.append([nums[i-1],nums[i]])
        return ans
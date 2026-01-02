class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        count=1
        pos=0
        for i in range(1,len(nums)):
            if(nums[i]==nums[pos] and count<2):
                pos=pos+1
                nums[pos]=nums[i]
                count+=1
            elif nums[i]!=nums[pos]:
                pos=pos+1
                nums[pos]=nums[i]
                count=1
        return pos+1
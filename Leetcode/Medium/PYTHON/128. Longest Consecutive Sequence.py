class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        set_map=set(nums)
        longest=0
        for i in set_map:
            if (i-1 not in set_map):
                x=i
                count=1
                while(x+1 in set_map):
                    count+=1
                    x+=1
                longest=max(count,longest) 
        return longest
        
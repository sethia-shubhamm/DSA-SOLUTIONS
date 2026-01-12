class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums.sort()
        min=1
        for i in nums:
            if(i<1): continue
            if(i==min):
                min+=1
        return min
        
#Not optimized but easy to understand (Sorting Approach)

class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        freq=Counter(nums)
        min=1
        while(freq[min]!=0): min+=1
        return min
        
#Another Approach using HashMap not optimized 
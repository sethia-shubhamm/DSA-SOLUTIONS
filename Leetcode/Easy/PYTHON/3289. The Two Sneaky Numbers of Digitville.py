class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        freq={}
        ans=[]
        for i in nums:
            if i not in freq:
                freq[i]=1
            else:
                ans.append(i)
        return ans
        
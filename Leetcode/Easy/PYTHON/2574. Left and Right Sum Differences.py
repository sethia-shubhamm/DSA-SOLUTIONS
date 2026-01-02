class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        rsum=0
        lsum=0
        ans=[]
        for i in nums:
            rsum+=i
        for i in nums:
            rsum-=i
            ans.append(abs(lsum-rsum))
            lsum+=i
        return ans
        
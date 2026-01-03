class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:
        ans=[]
        for i in nums:
            flag=0
            rowans=[]
            for j in ans:
                if(i not in j):
                    j.append(i)
                    flag=1
                    break
            if(flag==0):
                rowans.append(i)
                ans.append(rowans)
        return ans
                
#Optimized Approach:

class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:
        freq = Counter(nums)
        ans = []

        for num, count in freq.items():
            for i in range(count):
                if i == len(ans):
                    ans.append([])
                ans[i].append(num)

        return ans
    
#link: https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/
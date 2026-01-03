class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        countArr=[]
        for i in bank:
            secDev=i.count("1")
            if(secDev!=0): countArr.append(secDev)
        ans=0
        for i in range(0,len(countArr)-1):
            ans+=(countArr[i]*countArr[i+1])
        return ans
        
#link: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/
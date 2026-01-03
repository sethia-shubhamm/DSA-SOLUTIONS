class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        jewelFreq={}
        for i in jewels:
            jewelFreq[i]=1
        count=0
        for i in stones: 
            if i in jewelFreq:
                count+=1
        return count

# link: https://leetcode.com/problems/jewels-and-stones/description/